#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll A[200002]={0};
int main()
{
	ll n; 
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	ll i=0,j=n-1;

	while(A[i]==A[0])
	{
		i++;
	}
	while(A[j]==A[n-1])
	{
		j--;
	}
	if(A[0]==A[n-1])
	{
		cout<<0<<" "<<(n*(n-1))/2<<endl; 
	}
	else{	
		cout<<A[n-1]-A[0]<<" "<<i*((n-1)-j)<<endl;
	}
}
