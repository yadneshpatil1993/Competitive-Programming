#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int p=0,i=0;
	p=s.length();
	int A[p][3]={0};
	int count=0;
	bool flag = true,switch1=true;
	int start=0,end=0,j=0;
	for(i=0;i<p;i++)
	{
		if((int)s[i]<=57&&(int)s[i]>=48)
		{
			count++;
			switch1=false;
			if(flag)
			{
				start=i;
				flag=false;
			}
		}
		else 
		{
			switch1=true;
			if(i>0)
			{
				end=i-1;
			}
			else end=0;
			A[j][0]=start;
			A[j][1]=end;
			A[j][2]=count;
			count=0;
			flag=true;
			j++;
		}
	}

	if(!switch1)
	{
			if(i>0)
			{
				end=i-1;
			}
			A[j][0]=start;
			A[j][1]=end;
			A[j][2]=count;
			count=0;
			flag=true;
			j++;
	}

	for(i=0;i<j;i++)
	{

	}
