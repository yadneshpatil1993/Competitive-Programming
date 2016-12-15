#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	int p,i=0;
	string s1="qwertyuiopasdfghjkl;zxcvbnm,./" ;
	string s2;
	char c;
	cin>>c;
	cin>>s2;
	p = s2.length();
	if(c=='R')
	{
		for(i=0;i<p;i++)
		{
			int j=0;
			while(s1[j]!=s2[i])
			{
				j++;
			}
			cout<<s1[j-1];
		}
	}
	else if(c=='L')
	{
		for(i=0;i<p;i++)
		{
			int j=0;
			while(s1[j]!=s2[i])
			{
				j++;
			}
			cout<<s1[j+1];
		}	
	}
	cout<<endl;
	return 0;
}