#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	if(n>=m && m%2!=0)cout<<"Akshat"<<endl;
	else if(m>=n && n%2!=0)cout<<"Akshat"<<endl;
	else cout<<"Malvika"<<endl;
	return 0;
}