#include <bits/stdc++.h>

using namespace std;
#define ll long long int 
int main()
{
	ll n,d;
	cin>>n>>d;
	std::pair <ll,ll> mypair[n];  

	for(ll i=0;i<n;i++)
	{
		cin>>mypair[i].first;
		cin>>mypair[i].second;
	}
	sort(mypair,mypair+n);
	ll i=0,j=0;
	ll gcount=0,lcount=0;
	while(i<n&&j<n)
	{
		if(abs(mypair[i].first-mypair[j].first)<d)
		{
			lcount+=mypair[j].second;
			j++;	
		}
		else
		{
			lcount-=mypair[i].second;
			i++;
		}
		if(gcount>lcount)gcount=lcount;
	}
	cout<<gcount<<endl;
	return 0;
}