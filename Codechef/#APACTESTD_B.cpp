#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main()
{
	int T,k=0;
	cin>>T;
	for(k=1;k<=T;k++)
	{
		int N,a,i=0,j=0,b,A[5002]={0};
		cin>>N;
		for(i=1;i<=N;i++)
		{
			cin>>a>>b;
			for(j=a;j<=b;j++)A[j]++;
		}
		int Q;
		cin>>Q;
		int temp;
		cout<<"Case #"<<k<<": ";
		while(Q--)
		{
			cin>>temp;
			cout<<A[temp]<<" ";
		}
		cout<<endl;
	}
	return 0;
}