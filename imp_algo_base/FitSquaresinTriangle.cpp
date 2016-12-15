#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int b;
		cin>>b;
		b=(b-2)/2;
		cout<<(b*(b+1))/2<<endl;
	}
	return 0;
}