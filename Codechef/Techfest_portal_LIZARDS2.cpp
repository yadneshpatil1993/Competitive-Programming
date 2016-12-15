#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll gcd(ll a,ll b) {if(a%b==0) return b;else return gcd(b,a%b);}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		ll n,p1;
		scanf("%lld",&n);
		p1 = n*(n-1);
		int g = gcd(p1,8);
		cout<<p1/g<<"/"<<8/g<<endl;
	}
	return 0;
}