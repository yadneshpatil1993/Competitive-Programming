#include <bits/stdc++.h>

using namespace std;
#define LL long long int
LL A[10][10]={1};
int main()
{
	LL n;
	cin>>n;
	for(int i=0;i<10;i++)A[0][i]=1;
	for(int i=0;i<10;i++)A[i][0]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			A[i][j]=A[i-1][j]+A[i][j-1];
		}
	}
	// for(int i=1;i<n;i++)
	// {
	// 	for(int j=1;j<n;j++)
	// 	{
	// 		cout<<A[i][j]<<endl;
	// 	}
	// }
	
	cout<<A[n-1][n-1]<<endl;
}