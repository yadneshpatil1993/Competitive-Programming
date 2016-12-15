#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==1||b==1||c==1)
	{
		cout<<max((a+b)*c,max(a+(b*c),max(a+b+c,max(a*b*c,max(a*b+c,a*(b+c))))))<<endl;
	}
	else 
	{
		cout<<a*b*c<<endl;
	}
	return 0;
}