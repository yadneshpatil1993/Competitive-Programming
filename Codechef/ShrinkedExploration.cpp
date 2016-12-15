#include <bits/stdc++.h>
using namespace std;
#define ll long int int
//char final[];
ll G[1000000];

char getkth(string s1,int k)
{
	
	ll p=s1.length();
	int i=0;
	std::stack<char> cstack;
	std::stack<int> istack;
	int t=0;
	ll gcount=0;

	for(i=0;i<p;i++)
	{
		if((int)s1[i]<=122&&(int)s1[i]>=97)
		{
			cstack.push(s1[i]);
			ll count=0,j=1;
			gcount++;
			if(!stack.empty)
			{
				while(!istack.empty())
				{
					count=count+j*istack.top();
					istack.pop();
					j*=10;
				}
				G[t]=gcount;
				t++;
				gcount*=count;
			}
			int l=t;
			ll temp = gcount;
			while(k>0)
			{
				if(gcount>=k)
				{
					k=gcount-k;
				}
				else
				{
					G[l]=
				}	
			}
			
		}
		else
		{
			istack.push((int)s[i]-48);
		}
	}
}

int main()
{
	string s1;
	int k;
	while(cin >> s1 >> k)
	{
		cout<<getkth(s1,k)<<endl;
	}
	return 0;
}