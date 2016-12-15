#include <bits/stdc++.h>
using namespace std;
# define LL long long int
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL A[100002]={0},N,i=0,dp[100002];
		cin>>N;
		A[0]=0;
		for(i=1;i<=N;i++)
		{
			cin>>A[i];
		}	
		dp[0]=0;
		dp[1]=A[1];
		for(i=2;i<=N,i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+A[i]);
		}
		if(dp[n]>0)cout<<dp[n]<<endl;	
		else cout<<"DANGER"<<endl;
	}
}
