#include <bits/stdc++.h>

using namespace std;

int B[601]={0};

int main()
{
	int m,t,r,count=0,last=0;
	cin>>m>>t>>r;
	if(t>=r)
	{		
		int A[m];
		for(int i=0;i<m;i++)cin>>A[i]+300;
		last=A[m-1]-t;
		for(int j=A[0];j>=A[0]-r;i--)B[j]=1;
		//count+=r;
		for(int i=m-2;i>=0;i--)
		{
				if(A[i]>last)
				{
					while(j>-1&&)
					if(A[i-1]-t+r-1>A[i])
					{
						count+=A[i-1]-t+r-1-A[i];
						last -=A[i-1]-A[i];
					}	
				}
				else
				{
					last=A[i]-t;
					for(int j=i-1;j>=i-300;i--)B[j]=1;		
				}
		}		
		cout<<count<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}