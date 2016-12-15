#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main()
{
	double a1,a2,a3;
	while(true)
	{
	cin>>a1>>a2>>a3;
	if(a1!=0 || a2!=0 || a3!=0)
	{
			if(a2/a1==a3/a2)cout<<"GP "<<a3*(a3/a2)<<endl;
			else	cout<<"AP "<<2*a3-a2<<endl;
	}
	else break;
	}
	return 0;
}