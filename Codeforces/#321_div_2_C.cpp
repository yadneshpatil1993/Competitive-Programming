#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	std::vector<std::vector<int>> v[n];
	bool cat[n];
	for(int i=0;i<n;i++)
	{
		cin>>cat[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int t1,t2;
		cin>>t1>>t2;
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	
	return 0;
}