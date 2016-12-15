#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,i=0;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		//scanf("%s",&s);
		int p=0;
		p=s.length();
		int maxi=0,count=0,day=0;
		bool flag=true;
		for(i=0;i<p;i++)
		{
			if(s[i]=='#')
			{
				if(count>maxi)
					{
						day++;
						maxi=count;
					}
				count=0;
				flag=true;
			}
			else
			{
				count++;
				flag=false;
			}
		}
		if(!flag)
			{
				if(count>maxi)day++;
			}
		printf("%d\n",day);
	} 
	return 0;
}