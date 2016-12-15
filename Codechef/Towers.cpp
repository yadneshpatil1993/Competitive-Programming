#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)cin>>a[i];
		int x[n+1];
		int stack[n+1];
		int top=0;
		stack[++top]=a[n];
		int i=n-1;
		while(i>0)
		{
			if(a[i]<stack[top])
			stack[++top]=a[i--];
			else
			stack[]
		}


	}
}