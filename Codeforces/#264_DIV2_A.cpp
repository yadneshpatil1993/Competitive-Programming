#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,i=0;
	cin>>n>>s;
	s=s*100;
	int A[n];
	bool flag=false;
	for(i=0;i<n;i++)
	{
		int t1,t2;
		cin>>t1>>t2;
		A[i]=t1*100+t2;
	}
	int sweets=0,temp=0;
	for(i=0;i<n;i++)
	{
		if(A[i]<=s)
		{
			flag=true;
			if(sweets<=(s-A[i])%100)sweets=(s-A[i])%100;
		}
	}
	if(flag)cout<<sweets<<endl;
	else cout<<-1<<endl;
	return 0;
}