#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[100][2];
	int sum=0,n,mincount=0,pluscount=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i][0]>>A[i][1];
		sum+=A[i][1];
		if(A[i][0]<0)mincount++;
		else pluscount++;
	}
	sort(A.begin(),A.end()+n);
	if(pluscount-mincount>1)
	{
		int tmp = pluscount-mincount-1;
		while(tmp>0)
		{
			sum-=A[n-tmp][1];
			tmp--;
		}
	}
	else if(mincount-pluscount>1)
	{
		int tmp = mincount-pluscount-1;
		while(tmp>0)
		{
			sum-=A[tmp-1][1];
			tmp--;
		}
	}
	cout<<sum<<endl;
	return 0;
}
