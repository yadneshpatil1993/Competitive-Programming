#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long int count=0;
		for(int i=0;i<s.length();i++)
		{
			count+=(int)s[i]-96;
		}
		cout<<count<<endl;
	}
	return 0;
}