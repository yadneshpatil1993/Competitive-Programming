#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,s,i=0,maxi=1,count=0;
	cin>>m>>s;
	maxi=9*m;

	if(maxi<s||(s==0)&&m>1)
	{
		cout<<-1<<" "<<-1;
		return 0;
	} 
	else if(s==0&m==1)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	
	int mini=0,count2=0;
	while(mini<s)
	{
		count2++;
		mini+=9;
	}
	if(count2==m)
	{
		cout<<s-mini+9;
		for(i=0;i<count2-1;i++)
		{
			cout<<9;
		}
	}
	else
	{
		cout<<1;
		for(i=1;i<m-count2;i++)cout<<0;
		cout<<s-mini+8;
		for(i=0;i<count2-1;i++)cout<<9;	
	}

	cout<<" ";
	while(maxi>=s)
	{
		count++;
		maxi-=9;
	}
	if(count==1)
	{
		for(i=0;i<m-1;i++)
		{
			cout<<9;
		}
		cout<<s-maxi;	
	}
	else
	{
		for(i=0;i<m-count;i++)
		{
			cout<<9;
		}
		cout<<s-maxi;
		for(i=m-count+1;i<m;i++)
		{
			cout<<0;
		}	
	}
	

	return 0;
}