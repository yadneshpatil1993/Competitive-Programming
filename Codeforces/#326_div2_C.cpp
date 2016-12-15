#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long long int power(long long int n,long long int x)
{
    if(x==0) return 1;
    long long int temp=power(n,x/2)%MOD;
    if(x%2==0) return (temp*temp)%MOD;
    else return (((n*temp)%MOD)*temp)%MOD;
}
int main()
{
	ll n;
	cin>>n;
	
	return 0;
}
