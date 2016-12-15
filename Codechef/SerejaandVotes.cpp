#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int count=0,total=0,p;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>p;
			if(p!=0){count++;total+=p;}
		}
		if(total<100)cout<<"NO"<<endl;
		else if(total<100+count||total==100)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
	return 0;
} 