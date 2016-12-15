#include <bits/stdc++.h>
using namespace std;

int treea[1000002][4];
string s;

int build_tree(int l, int r, int index)
{
	if(l==r)
	{
		int tp=0;
		if(s[l]=='c')tp=0;
		else if(s[l]=='h')tp=1;
		else if(s[l]=='e')tp=2;
		else tp=3;
		
		tree[index][tp]++;
		return treea[index][tp]++; 
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
	string s;
	cin>>s;
	build_tree1(0,n-1,1);
	build_tree2(0,n-1,1);
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int l,r;
		char c1,c2;
		cin>>c1>>c2;
		cin>>l>>r;
		cout<<query_tree(0,n-1,l,r,1)<<endl;
	}
	return 0;
}