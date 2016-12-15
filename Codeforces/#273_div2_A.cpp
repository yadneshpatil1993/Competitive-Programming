#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,temp,count=0;
	for(i=0;i<5;i++)
	{
		cin>>temp;
		count+=temp;
	}
	if(count==0 || count%5!=0)cout<<-1<<endl;
	else cout<<count/5<<endl;
	return 0;
}