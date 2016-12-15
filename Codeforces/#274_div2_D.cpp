#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
	LL n,i=0,l,x,y,A[100002];
	cin>>n>>l>>x>>y;
	for(i=0;i<n;i++)cin>>A[i];
	LL p1=0,p2=0;
	bool flag=true,xmark=false,ymark=false;
	while(flag&&p2<=n&&p1<=n)	
	{
		if(A[p2]-A[p1]==y)
		{
			flag=false;
		}
		else if(A[p2]-A[p1]>y)
		{
			p1++;
		}
		else if(A[p2]-A[p1]<y)
		{
			p2++;
		}
	}
	if(flag)ymark=true;

	flag=true;
		p1=p2=0;
		while(flag&&p2<=n&&p1<=n)	
		{
			if(A[p2]-A[p1]==x)
			{
				flag=false;
			}
			else if(A[p2]-A[p1]>x)
			{
				p1++;
			}
			else if(A[p2]-A[p1]<x)
			{
				p2++;
			}
		}
		
	if(flag) xmark=true;
	
	if(!xmark&&!ymark)
	{
		cout<<0<<endl;	
		return 0;
	}
	else if(!xmark&&ymark)
	{
		cout<<1<<"\n"<<y<<endl;	
		return 0;		
	}
	else if(!ymark&&xmark)
	{
		cout<<1<<"\n"<<x<<endl;	
		return 0;		
	}
	else
	{
		flag=true;
		p1=p2=0;
		while(flag&&p2<=n&&p1<=n)	
		{
			if(A[p2]-A[p1]==y-x)
			{
				flag=false;
			}
			else if(A[p2]-A[p1]>y-x)
			{
				p1++;
			}
			else if(A[p2]-A[p1]<y-x)
			{
				p2++;
			}
		}
		if(flag)
		{
			cout<<2<<"\n"<<x<<" "<<y<<endl; 
		}
		else 
		{
			if(A[p1]+y<=l)cout<<1<<"\n"<<A[p1]+y<<endl;
			else if(A[p1]-x>=0)cout<<1<<"\n"<<A[p1]-x<<endl;
		}	
	} 	
	return 0;
}