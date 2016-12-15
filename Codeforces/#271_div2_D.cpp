#include <bits/stdc++.h>
using namespace std;
long long int A[100001],sum[100001];
int main()
{
	long long int n,k,i=0;
	cin>>n>>k;
	for(i=1;i<k;i++)A[i]=1;
	A[k]=2;
	for(i=k+1;i<100001;i++)
	{
		A[i]=(A[i-1]+A[i-k])%1000000007;
	} 
	sum[0]=0;
	for(i=1;i<100001;i++)
	{
		sum[i]=(sum[i-1]+A[i]);
	}
	for(i=0;i<n;i++)
	{
		long long int a,b,count=0;
		cin>>a>>b;
		count=(sum[b]-sum[a-1])%1000000007;
		cout<<count%1000000007<<endl;
	}
	return 0;
}