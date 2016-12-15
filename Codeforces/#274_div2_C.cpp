#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
	int n,i=0;
	pair <int,int> A[5002];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i].first>>A[i].second;
	}
	sort(A,A+n);
	int count=A[0].second;
	for(i=1;i<n;i++)
	{
		if(count<=A[i].second)count=A[i].second;
		else count=A[i].first;
	}
	cout<<count<<endl;
	return 0;
}