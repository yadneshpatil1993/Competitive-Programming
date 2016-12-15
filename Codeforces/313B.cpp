#include <bits/stdc++.h>
using namespace std;
int A[100002]={0};

int main()
{
	int m;
	string s;

	cin>>s;
	cin>>m;

	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])A[i]=A[i-1]+1;
		else A[i]=A[i-1];
	}

	for(int i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<A[r-1]-A[l-1]<<endl;
	}
	return 0;
}