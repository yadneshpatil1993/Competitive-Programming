#include <bits/stdc++.h>

using namespace std;
#define LL long long int
int main()
{
	LL n,old=0;
	cin>>n;
	n--;
	LL a;
	cin>>a;
	old=a;
	cout<<a<<endl;
	while(n--)
	{
		cin>>a;
		while(true)
		{
			old++;
			LL temp=old,count=0;
			while(temp)
			{
				count+=temp%10;
				temp/=10;
			}
			if(count==a)
			{
				cout<<old<<endl;
				break;
			}
		}
	}
}