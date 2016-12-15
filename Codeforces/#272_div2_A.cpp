#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n%2==0)
	{
		int temp;
		temp=n/2;
		while(temp%m!=0&&temp<n)
		{
			temp++;
		}
		if(temp==n&&temp%m==0)cout<<temp<<endl;
		else if(temp%m==0)cout<<temp<<endl;
		else cout<<-1<<endl;
	}
	else 
	{
		int temp=n/2+1;
		while(temp%m!=0&&temp<n)
		{
			temp++;
		}
		if(temp==n&&temp%m==0)cout<<temp<<endl;
		else if(temp%m==0)cout<<temp<<endl;
		else cout<<-1<<endl;		
	}
	return 0;
}