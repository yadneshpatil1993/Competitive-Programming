#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,i=0,operations=0;
	cin>>n>>k>>m;
	int A[n],added[17]={0};
	bool done = false;
	for(i=0;i<n;i++) cin>>A[i];
	while(!done)
	{
		int all=0;
		for(int j=0;j<n-k;j++)
		{
			int maxi=0,count=0,temp;
			for(int s=j;s<j+k+1;s++)
			{
				if(maxi<A[s])maxi=A[s];
			}
			for(int s=j;s<j+k+1;s++)
			{
				if(A[s]==maxi)
					{
						count++;
						temp=s;
					}
			}		
			if(count>=m)
			{
				 if(added[temp]!=1)
				{
					A[temp]++;
					added[temp]=1;
					operations++;
				}
			}
			else
			{
				all++;
				if(all==n-k)
				{
					done=true;
				}
			}	
		}
	}		
	return 0;
}