#include <bits/stdc++.h>
#define LL long long int
using namespace std;
#define MOD 1000000007 
LL GCD(LL a, LL b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}
LL nCr(LL n, LL r)
{
    LL ans=1;
    for(LL i=1;i<=r;i++)
    {
        LL d=GCD(ans,i);
        ans/=d;
        ans=ans*((n-i+1)/(i/d));
        //ans= ans;
    }
    return ans%MOD;
}

long long int power(long long int n,long long int x)
{
    if(x==0) return 1;
    long long int temp=power(n,x/2)%MOD;
    if(x%2==0) return (temp*temp)%MOD;
    else return (((n*temp)%MOD)*temp)%MOD;
}
int main()
{
	LL n,a,b,small,large;
	scanf("%lld%lld%lld",&n,&a,&b);
	if(a>b)
	{
		small=b;
		large=a;
	}
	else if(a<b)
	{
		small=a;
		large=b;
	}
	else 
	{
		cout<<0<<endl;
		return 0;
	}
	if(large==n)
	{
		if(large-small>=2)cout<<nCr(large+small-1,small)%MOD<<endl;
		else cout<<"0"<<endl;
	}
	else if(large>n)
	{
		if(large-small==2 && small>=n)cout<<((nCr(2*(n-1),(n-1))%MOD)*(power(2,small-n+1)%MOD))%MOD<<endl;
		else if(large-small==2 && small<n)cout<<(nCr(2*small,small))%MOD<<endl;
		else cout<<0<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	return 0;
}