#include <bits/stdc++.h>
using namespace std;
#define LL long long int
double A[500003]={0};
int main()
{
	double count=0;
	string s;
	cin>>s;
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')A[i+1]=A[i]+1;
		else A[i+1]=A[i];
	}
	for(int i=1;i<=s.length();i++)
	{
		for(int j=0;j<i;j++)
		{
			count+=double((A[i]-A[j])/(i-j));
		}
	}
	cout<<setprecision(8)<<count<<endl;
	return 0;
}