#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		int i,count=0;
		cin>>s1>>s2;
		if(s1.length()==s2.length()){
		for(i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i])count++;
		}
		
		cout<<count<<endl;
		}
		else cout<<-1<<endl;
	}
	return 0;
}