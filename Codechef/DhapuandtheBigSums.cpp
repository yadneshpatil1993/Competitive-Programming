#include <bits/stdc++.h>
using namespace std;

int pl(string a, string b)
{
	stack<int> ans;
	int p1=a.length(),p2=b.length(),car=0;
				
	while(p1!=0)
				{
					int tmp = (int)a[p1-1]-48 + (int)b[p2-1]-48 + car;
					car=tmp/10;
					ans.push(tmp%10);
					p2--;
					p1--;
				}
				while(p2!=0)
				{
					int tmp = (int)b[p2-1]-48 + car;
					car=tmp/10;
					ans.push(tmp%10);
					p2--;	
				}
					ans.push(car);
				bool flag=false;	
				while(!ans.empty())
				{
					if(ans.top()>0)flag=true;
					if(flag)cout<<ans.top();
					ans.pop();
				}
				if(!flag)cout<<0;
			cout<<endl;
			return 0;	
}

int mi(string a, string b)
{
	stack<int> ans;
	int p1=a.length(),p2=b.length(),car=0;
				
				while(p1!=0)
				{
					if((int)b[p2-1]>=(int)a[p1-1]+car)
					{
						int tmp = (int)b[p2-1] - (int)a[p1-1] - car;
						car = 0;
						ans.push(tmp);
					}
					else
					{
						int tmp = (int)b[p2-1] + 10 - (int)a[p1-1] - car;
						car = 1;
						ans.push(tmp);	
					}	
					p2--;
					p1--;
				}
				while(p2!=0)
				{
					if((int)b[p2-1]>=car)
					{
						int tmp = (int)b[p2-1] - car;
						car = 0;
						ans.push(tmp);
					}
					else
					{
						int tmp = (int)b[p2-1] + 10 - car;
						car = 1;
						ans.push(tmp);	
					}	
					p2--;
						
				}
				bool flag=false;
				while(!ans.empty())
				{
					if(ans.top()>0)flag=true;
					if(flag)cout<<ans.top();
					ans.pop();
				}
				if(!flag)cout<<0;
				cout<<endl;
				return 0;	
}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string a,b,all;
		char op;
		cin>>all;
		bool flag=false;
		for(int i=0;i<all.length();i++)
		{
			if(all[i]=='+'||all[i]=='-')
			{
				op=all[i];
				flag=true;
			}
			else if(!flag)
			{
				a+=all[i];
			}
			else
			{
				b+=all[i];
			}
		}

		if(op=='+')
		{
			if(a.length()<=b.length())pl(a,b);
			else pl(b,a);
		}
		else
		{
			if(a.length()<b.length())
				{
					cout<<"-";
					mi(a,b);
				}
			else if(a.length()==b.length())
			{
				int j=0;
				while(a[j]==b[j]&&j<a.length())j++;
				if(j==a.length()) cout<<0<<endl;
				else if(a[j]>b[j])mi(b,a);
				else{ cout<<"-";mi(a,b);}
			}
			else mi(b,a);
		}
	}
	return 0;
}