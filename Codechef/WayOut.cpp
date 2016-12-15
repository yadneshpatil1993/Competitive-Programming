#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll tree[10000002];

ll build_tree(ll l, ll r, ll index)
{
	if(l==r)
	{
		tree[index]=0;
		return tree[index];
	}
	ll mid = (l+r)/2;
	build_tree(l,mid,2*index);
	build_tree(mid+1,r,2*index+1);
	tree[index]=0;
	return tree[index];
} 

ll update_tree(ll s,ll e,ll l,ll r,ll index)
{
	if(s==l && e==r && l==r)
	{
		tree[index]++;
		return tree[index];
	}
	ll mid = (s+e)/2;
	if(r<=mid)
	{
		tree[index]=update_tree(s,mid,l,r,2*index);
		return tree[index];
	}
	else if(l>mid)
	{
		tree[index]=update_tree(mid+1,e,l,r,2*index+1);
		return tree[index];
	}
	else
	{
		tree[index]=(update_tree(s,mid,l,mid,2*index)+update_tree(mid+1,e,mid+1,r,2*index+1));
	    return tree[index];
	}
}

int sum_tree(ll s,ll e,ll l,ll r,ll index)
{
    if(s==l && e==r)
	{
		return tree[index];		
	}
	ll mid = (s+e)/2;
	if(r<=mid)
	{
		return sum_tree(s,mid,l,r,2*index);
	}
	else if(l>mid)
	{
		return sum_tree(mid+1,e,l,r,2*index+1);
	}
	else
	{
		return (sum_tree(s,mid,l,mid,2*index)+sum_tree(mid+1,e,mid+1,r,2*index+1));
	}
    
}

int main()
{	
	int T;
	cin>>T;
	while(T--)
	{
		ll N,H;
		scanf("%lld%lld",&N,&H);
		build_tree(0,N-1,1);
		for(int i=0;i<N;i++)
		{
			ll l,r;
			scanf("%lld%lld",&l,&r);
			update_tree(0,N-1,l,r,1);
		}
    	ll sum=0,maxsum=0;
		sum = sum_tree(0,N-1,0,H-1,1);
        //cout<<sum<<endl;
		maxsum=sum;
        for(ll i=1;i<N-H+1;i++)
		{
		    sum=sum_tree(0,N-1,i,i+H-1,1);
		    if(sum>maxsum)maxsum=sum;
		}
		cout<<(N*H)-maxsum<<endl;
	}
	return 0;
} 