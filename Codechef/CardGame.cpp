#include <bits/stdc++.h>
using namespace std;
#define  LL long long int

int dp[16][16]={0};

int main()
{
	LL N;
	cin>>N;
	for(int i=0;i<=N;i++)dp[0][i]=1;
	for(int i=0;i<=N;i++)dp[i][1]=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=2;j<=N;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[N][N]<<endl;	
	return 0; 
}