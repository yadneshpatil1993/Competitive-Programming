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
		int p=0;
		int A[26]={0},count=0,maxi=0,gmaxi=0;
		p = s.length();
		bool flag=false;
		for(int i=0;i<p;i++)
		{
		    if(count<=2)
		    {
				if(A[(int)s[i]-97]==0)
					{
						A[(int)s[i]-97]=1;
						count++;
					}
					flag=false;
					maxi++;
			}
			if(count==3)
			{
				count=1;
				//A[26]={0};
				for(int j=0;j<26;j++)A[j]=0;
                A[(int)s[i]-97]=1;
                maxi--;
            	if(maxi>gmaxi)gmaxi=maxi;
            	maxi=1;
				flag=true;
			}

		}
		if(!flag)
		{
			if(count<=2){
			if(maxi>gmaxi)gmaxi=maxi;
			}
		}
		printf("%d\n",gmaxi);
	}
	return 0;
}
