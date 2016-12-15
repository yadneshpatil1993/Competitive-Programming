#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,i=0,temp=0,count=0;
		cin>>n>>m;
		int A[n];
		for(i=0;i<n;i++)
			{
				cin>>A[i];
				count+=A[i];
				if(A[i]>=temp)temp=A[i];
			}
		int maxi = temp*n-count;
		if(maxi<=m)
		{
			if((m-maxi)%n==0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else 
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}