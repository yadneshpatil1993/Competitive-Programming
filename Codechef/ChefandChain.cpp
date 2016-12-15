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
		int count1=0,count2=0;
		for(int i=0;i<s.length();i++)
		{
			if(i%2==0)
			{
				if(s[i]=='+')count1++;
				else count2++;
			}
			else
			{
				if(s[i]=='-')count1++;
				else count2++;
			}
		}
		cout<<min(count2,count1)<<endl;

	}
	return 0;
}