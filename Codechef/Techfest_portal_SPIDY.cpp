#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		scanf("%d",&n);
		if(n%2==0)
		{
			if(n>=20)printf("YES\n");
			else
			{
				int temp=n;
				bool flag=false;
				while(temp>0)
				{
					if(temp%8==0){printf("YES\n");flag=true;break;}
					temp-=6;
				}
				if(!flag)
				{
				    if(n%6==0)printf("NO\n");
				    else printf("RIDICULOUS\n");
				}
			}
		}
		else printf("RIDICULOUS\n");
	}
	return 0;
}
