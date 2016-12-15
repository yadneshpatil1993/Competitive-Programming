#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],D[n],i=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i]>>D[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(A[i]==A[j]+D[j] && A[j]==A[i]+D[i]){cout<<"YES"<<endl;return 0;}
			}	
		}
	}
	cout<<"NO"<<endl;
	return 0;
}