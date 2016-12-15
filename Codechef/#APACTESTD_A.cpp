#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL A[1000002][1000002];
dp B[1000002][1000002];

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL s,i=0,j=0;
		cin>>s;
		for(i=0;i<=s*s;i++)
		{
			for(j=0;j<=s*s;j++)
			{
				if(i==0||j==0)A[i][j]==-1;
				else
				{
					cin>>A[i][j];
				}
			}
		}
		for(i=1;i<=s*s;i++)
		{
			for(j=1;j<=s*s;j++)
			{
				int count=0;
				if(A[i-1][j]-1==A[i][j])count++;
				if(A[i][j-1]-1==A[i][j])count++;
				if(A[i][j+1]-1==A[i][j])count++;
				if(A[i+1][j]-1==A[i][j])count++;
				dp[i][j]=count;
			}
		}
	}	
	return 0;
} 