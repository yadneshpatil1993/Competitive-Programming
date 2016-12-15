#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int count=0;
	int t = sqrt(x);
	for(int i=1;i<=min(t,n);i++)
	{
		if(x%i==0 && x/i<=n)count++;
	}
	double p = sqrt(x);
	int q = p;
	if(p==q)cout<<count*2-1<<endl;
	else cout<<count*2<<endl;
	return 0; 
}