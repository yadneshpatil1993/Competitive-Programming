#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,A[1002]={0},count=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		bool flag=true;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)flag=false;
		}
		if(flag)
		{
			A[count]=i;
			count++;
			int t=i*i;
			while(t<=n)
			{
				A[count]=t;
				count++;
				t=t*t;
			}
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<A[i]<<" ";
	}

	return 0;
}