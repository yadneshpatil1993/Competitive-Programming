#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int p1=0,p2=0,count=0;
		char s[100002];
		scanf("%s",s);
		p2=strlen(s);
		p2--;
		bool flag=false;
		while(p1<p2&&count<2)
		{
			if(s[p1]!=s[p2])
			{
				if(s[p1+1]==s[p2])
				{
					p1++;
					count++;
				}
				else if(s[p2-1]==s[p1])
				{
					p2--;
					count++;
				}
				else
				{
					flag=true;
					break;
				}
			}
			else
			{
				p1++;
				p2--;
			}
		}
		if(flag)
		{
			printf("NO\n");
		}
		else if(count==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
