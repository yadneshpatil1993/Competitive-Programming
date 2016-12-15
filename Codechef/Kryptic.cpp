#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000009
int A[100002]={0};
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)return false;
	}
	return true;
}

int main()
{
	int T;
	cin>>T;
	int n=0,i=0;
	A[0]=1;
	for(i=1;i<=100001;i++)
	{
		if(isprime(i))A[i]=((long long int)A[i-1]*i)%MOD;
		else A[i]=A[i-1];
	}
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		long long int res = (A[b]/A[a-1])%MOD;
		printf("%lld\n",res);
	}
	return 0;
}
