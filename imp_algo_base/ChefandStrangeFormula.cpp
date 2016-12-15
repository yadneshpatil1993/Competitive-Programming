#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll f[10000002];
ll fact(ll m)
{
	f[0]=1;
	for(ll i=1;i<=10000001;i++)
	{
		f[i]=(f[i-1]*i)%m;
	}
}

int main()
{
	ll n,m,count=0;
	cin>>n>>m;
	fact(m);
	for(ll i=0;i<n;i++)
	{
		ll p;
		cin>>p;
		if(p+1>=m)
		{
			if(p%2==0)
			{
				count=(count%m+((((((p/2)%m)*(p%m))%m)*((p+1)%m))%m-1)%m)%m;	
			}
			else
			{
				count=(count%m+((((((p%m)*(p%m))%m)*(((p+1)/2)%m))%m-1)%m))%m;
			}
		}
		else 
		{
			if(p%2==0)
			{
				count=(count%m+(((((((p/2)*(p%m))%m)*((p+1)%m))%m-1)%m)+f[p+1]%m)%m)%m;
			}
			else
			{
				count=(count%m+(((((((p%m)*(p%m))%m)*(((p+1)/2)%m))%m-1)%m)+f[p+1]%m)%m)%m;
			}
			
		}
	}  
	cout<<count<<endl;
	return 0;
}