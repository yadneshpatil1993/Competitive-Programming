#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,m;
	cin>>a>>m;
	while(a<m)
	{
		a+=a%m;
	}
	if(a==m)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}