#include<bits/stdc++.h>
using namespace std;
int A[102],B[102];
int main()
{
	int n,m,i=0,j=0;
	cin>>n;
	for(i=0;i<n;i++)cin>>A[i];
	sort(A,A+n);

	cin>>m;
	for(i=0;i<m;i++)cin>>B[i];
	sort(B,B+m);
	i=0;
	j=0;
	int count=0;
	
	while(i<n&&j<m)
	{
		if(abs(A[i]-B[j])<=1)
		{
			count++;
			i++;
			j++;
		}
		else if(A[i]<B[j])
		{
			i++;
		}
		else
		{
			j++;
		}	
	}

	cout<<count<<endl;
	return 0;
}