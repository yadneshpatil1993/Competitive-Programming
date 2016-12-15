#include <bits/stdc++.h>
using namespace std;

int tree[1000002];
int A[10000002];

int build_tree(int l, int r, int index)
{
	if(l==r)
	{
		tree[index]=A[l];
		return A[l]; 
	}
	int mid = (l+r)/2;
	int sumleft = build_tree(l,mid,2*index);
	int sumright = build_tree(mid+1,r,2*index+1);
	tree[index] = sumleft+sumright;
	return tree[index];	
}

int update_tree(int s,int e,int i,int index)
{
	if(s==e)
	{
		tree[index]=-tree[index];
		A[i-1]=-A[i-1];
		return tree[index];
	}
	int mid = (s+e)/2;
	if(i<=mid)
	{
		update_tree(s,mid,i,2*index);
	}
	else
	{
		update_tree(mid+1,e,i,2*index+1);
	}
	tree[index]=tree[2*index]+tree[2*index+1];
}


int main()
{
	int T=10;
	while(T--)
	{
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				char c;
				cin>>c;
				if(c==')')A[i]=-1;
				else A[i]=1;
			}
			build_tree(0,n-1,1);
			int q;
			cin>>q;
			for(int i=0;i<q;i++)
			{
				int k;
				cin>>k;
				if(k=='0')
				{
					if(tree[1]==0)cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
				}
				else
				{
					update_tree(1,n,k,1);
				}
			}

	}
	return 0;
}