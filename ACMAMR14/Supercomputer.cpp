#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
ll digit[10002],len[10002];
int main()
{
	ll T;
	scanf("%lld",&T);
	while(T--)
	{
		ll M,N,i=0,count=0,BigD=0;
		scanf("%lld",&M);
		for(i=0;i<M;i++)
		{
			scanf("%lld%lld",&len[i],&digit[i]);
			count+=len[i];
			BigD+=((len[i]%MOD)*digit)%MOD;
		}
		while(count>0)
		{
			
		}
	}	
	return 0; 
} 