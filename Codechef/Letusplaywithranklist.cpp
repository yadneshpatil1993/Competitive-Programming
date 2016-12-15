#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll n,s,i=0;
		cin>>n>>s;
		ll tmp = (n*(n+1))/2-s;
		while(tmp>0)
		{
		    tmp=tmp-n+i+1;
		    i++;
		}
 		cout<<i<<endl;
// 		for(i=1;i<=n;i++)
// 		{
// 			if((i*(i+1))/2>=s)
// 			{
// 				if(i==n && (i*(i+1))/2==s)cout<<0<<endl;
// 				else cout<<n-i+1<<endl;
// 				break;		
// 			}
// 		}
		
	}
	return 0;
}