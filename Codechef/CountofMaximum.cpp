#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{

		int A[26]={0};
		string s;
		cin>>s;
		int p=s.length();
		for(int i=0;i<p;i++)A[(int)s[i]-97]++;
		int maxi=0,index=0;
		for(int i=0;i<26;i++)
		{
			if(maxi<A[i])
			{
				maxi=A[i];
				index=i;
			}
		}
		for(int i=0;i<p;i++){

			if((int)s[i]==(index+97))
			{
				s[i]='?';
			}
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
