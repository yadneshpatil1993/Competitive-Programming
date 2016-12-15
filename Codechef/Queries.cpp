#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL A[1000002]={0},SUM[1000002]={0}; 
int main()
{
	LL N,Q;
	cin>>N>>Q;
	for(LL i=1;i<=N;i++)
	{
		cin>>A[i];
		SUM[i]=SUM[i-1]+A[i];
	}
	for(LL i=0;i<Q;i++)
	{
		LL l,r;
		string s;
		cin>>s;
		cin>>l>>r;
		
		cout<<SUM[r]-SUM[l-1]<<endl;
	}
	return 0;
}