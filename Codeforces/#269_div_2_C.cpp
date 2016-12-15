#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,fl,res=0;
	cin>>n;
	for(fl=1;(3*fl*(fl+1)/2)-fl<=n;fl++)
	{
		if((n+fl)%3==0)res++;
	}
	cout<<res<<endl;
}