#include <bits/stdc++.h>
#define LL long long int
using namespace std;
#define MOD 1000000007

LL A[10002]={0};

LL sum(int i,int j)
{
	LL temp=0;
	for(int k=i;k<j;k++)temp+=A[k];
	return temp;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL m,n;
		cin>>n>>m;
		for(int i=0;i<n;i++)scanf("%lld",&A[i]);
		sort(A,A+n);
		cout<<max(abs(sum(0,m)-sum(m,n)),abs(sum(0,n-m)-sum(n-m,n)))<<endl;
	}

	return 0;
}
