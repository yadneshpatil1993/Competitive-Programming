#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,t=1;
	cin>>n>>k;
	int A[n],B[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		B[i]=A[i];
	}
	sort(B,B+n);
	if(B[n-1]-B[0]>k)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			t=1;
			for(int j=0;j<A[i];j++)
			{
				if(j<=B[0])cout<<t<<" ";
				else
				{
					t++;
					cout<<t<<" ";
				}
			}
			cout<<endl;
		}
	}
	return 0;

}