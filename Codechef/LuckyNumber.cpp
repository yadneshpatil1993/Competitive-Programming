#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll power(ll n,ll x)
{
    if(x==0) return 1;
    ll temp=power(n,x/2);
    if(x%2==0) return (temp*temp);
    else return ((n*temp)*temp);
}

ll A[66];

int main()
{
	int T;
	cin>>T;
	for(int i=1;i<=64;i++)
	{
		A[i]=power(2,i);
	}
	while(T--)
	{
		long long int n;
		cin>>n;
		for(int i=1;i<=64;i++)
		{
			if(n==A[i])
			{
				cout<<1<<endl;
				break;
			}
			else if(n<A[i])
			{
				cout<<n-(A[i]-n-1)<<endl;
				break;
			}
			else
			{

			}
		}
	}
	return 0;
}