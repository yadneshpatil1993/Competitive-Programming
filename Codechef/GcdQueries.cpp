#include <bits/stdc++.h>
using namespace std;

int tree[10000002];
int A[10000002];

int GCD(int a, int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int build_tree(int l, int r, int index)
{
	if(l==r)
	{
		tree[index]=A[l];
		return A[l]; 
	}
	int mid = (l+r)/2;
	int gcdleft = build_tree(l,mid,2*index);
	int gcdright = build_tree(mid+1,r,2*index+1);
	tree[index] = GCD(gcdleft,gcdright);
	return tree[index];	
}

int query_tree(int s,int e,int l,int r,int index)
{
	if(s==l && e==r)
	{
		return tree[index];		
	}
	int mid = (s+e)/2;
	if(r<=mid)
	{
		return query_tree(s,mid,l,r,2*index);
	}
	else if(l>mid)
	{
		return query_tree(mid+1,e,l,r,2*index+1);
	}
	else
	{
		return GCD(query_tree(s,mid,l,mid,2*index),query_tree(mid+1,e,mid+1,r,2*index+1));
	}
}

int main()
{	
	int T;
	cin>>T;
	while(T--)
	{
		int n,q;
		scanf("%d%d",&n,&q);//cin>>n>>q;
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);//cin>>A[i];
		}
		build_tree(0,n-1,1);
		for(int i=0;i<q;i++)
		{
			int l,r;
			scanf("%d%d",&l,&r);//cin>>l>>r;
			if(l==1 && r!=n)printf("%d\n",query_tree(0,n-1,r,n-1,1));
			else if(l==1 && r==n)printf("0\n");
			else if(r==n) printf("%d\n",query_tree(0,n-1,0,l-2,1));
			else printf("%d\n",GCD(query_tree(0,n-1,0,l-2,1),query_tree(0,n-1,r,n-1,1)));
		}	
	}
	
	return 0;
}