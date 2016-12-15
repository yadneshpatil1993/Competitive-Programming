#include <bits/stdc++.h>
using namespace std;

#define LL long long int
		
double A[100002],B[100002];				
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL profit=0,n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>A[i];
		for(int i=0;i<n;i++)cin>>B[i];
		for(int i=0;i<n;i++)
		{
			if(profit<=((LL)(k/A[i]))*B[i])
			{
				profit = ((LL)(k/A[i]))*B[i] ; 
			}	
		}
		cout<<profit<<endl;
	}
	return 0;
}