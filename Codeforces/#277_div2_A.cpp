#include<bits/stdc++.h>
using namespace std;
int A[3002];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<n<<endl;
	for(i=0;i<n;i++)
	{
		int mini=1000000002,index=0;	
		for(j=i;j<n;j++)
		{
			if(A[j]<=mini)
			{
				index=j;
				mini=A[j];
			}
		}
		A[index]=A[i];
		A[i]=mini;
		cout<<i<<" "<<index<<endl;
	}
	return 0;
}