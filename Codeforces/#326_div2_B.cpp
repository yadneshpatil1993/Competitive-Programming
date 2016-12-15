#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	ll n;
	cin>>n;
	std::vector<int> v;
	for(ll i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
			v.push_back(n/i);	
		}
	}
	sort(v.begin(),v.end());
	for(ll j=v.size()-1;j>=0;j--)
	{
		for(ll i=2;i<=sqrt(v[j]);i++)
		{
			if(v[j]%(i*i)==0)
				{
					v[j]=0;
					break;
				}
		}
		if(v[j]!=0){
			cout<<v[j]<<endl;
			break;
		}	
	}
	return 0;
}