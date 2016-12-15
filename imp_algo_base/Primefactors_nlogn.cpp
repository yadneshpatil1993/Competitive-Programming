#include <bits/stdc++.h>
using namespace std;
#define LL long long int 
LL A[1000002]={0};

primefactors()
{
	for(int i=2;i<1000000;i++)
	{
		int j=i;
		while(j<1000000)
		{
			if(A[j]==0)A[j]=i;
			j+=i;
		}
	}
}

int main()
{
	int T;
	cin>>T;
	primefactors();
	while(T--)
	{
		int a;
		cin>>a;
		while(a!=1)
		{
			cout<<A[a]<<" ";
			a/=A[a];
		}
		cout<<endl;
	}
	return 0;
}