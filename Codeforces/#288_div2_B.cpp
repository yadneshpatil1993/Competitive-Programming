#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	bool flag = false ;
	for(int i=0;i<s.length()-1;i++)
	{
		if((s[i]-48)%2==0)
		{
			char c;
			c = s[i];
			s[i]=s[s.length()-1];
			s[s.length()-1]=c;
			if(s>s1){s1=s;flag=true;}
			c=s[i];
			s[i]=s[s.length()-1];
			s[s.length()-1]=c;
		}
	}
	if(!flag)cout<<-1<<endl;
	else cout<<s1<<endl;
	return 0;
}