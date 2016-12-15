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
		return query_tree(s,mid,l,mid,2*index) + query_tree(mid+1,e,mid+1,r,2*index+1);
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	build_tree(0,n-1,1);
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<query_tree(0,n-1,l,r,1)<<endl;
	}
	return 0;
}