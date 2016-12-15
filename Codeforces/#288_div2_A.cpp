#include <bits/stdc++.h>

using namespace std;
int A[1003][1003]={0};

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<k;i++)
	{
		int a,b;
		cin>>a>>b;
		A[a][b]=1;
		if(A[a-1][b-1]==1&&A[a-1][b]==1&&A[a][b-1]==1)
		{
			cout<<i+1<<endl;
			return 0;
		}
		else if(A[a-1][b]==1&&A[a-1][b+1]==1&&A[a][b+1]==1)
		{
		cout<<i+1<<endl;
			return 0;	
		}
		else if(A[a+1][b-1]==1&&A[a+1][b]==1&&A[a][b-1]==1)
		{
			cout<<i+1<<endl;
			return 0;
		}
		else if(A[a][b+1]==1&&A[a+1][b+1]==1&&A[a+1][b]==1)
		{
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	return 0;
}