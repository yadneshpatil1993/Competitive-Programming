#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	ll n;
	cin>>n;
	ll count=0,gmin=0,a,p;
	cin>>a>>p;
	count=a*p;
	gmin=p;
	for(ll i=1;i<n;i++)
	{
		cin>>a>>p;
		if(p<gmin)
		{
			gmin=p;
		}
		count+=a*gmin;
	}
	cout<<count<<endl;
	return 0;
}