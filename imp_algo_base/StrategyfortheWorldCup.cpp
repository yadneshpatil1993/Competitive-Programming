#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
ll mod = 1000000007;

ll dp[11][1802][302];



ll ways(ll l,ll r,ll b)
{
	if(l<0 || b==0)return 0;
	if(b>0&&r<0) return 0;
	if(b==1)
	{
		if(r==4 || r==6) return 1;
		else if(r==0)
		{
			if(l>0)return 2;
			else return 1;
		}
		else return 0;
	}
	if(dp[l][r][b]>-1)return dp[l][r][b];
	ll t1=0,t2=0,t3=0,t4=0;
	if(l>0 && (b-1)*6>=r)
	{
	   t1 = ways(l-1,r,b-1); 
	}
	if((b-1)*6>=r-4) t2=ways(l,r-4,b-1);
	if((b-1)*6>=r-6) t3=ways(l,r-6,b-1);
	if((b-1)*6>=r) t4=ways(l,r,b-1);
	//cout<<t1<<t2<<t3<<t4<<endl;
	dp[l][r][b]=(((t1%mod+t2%mod)%mod+t3%mod)%mod+t4%mod)%mod;
	return (((t1%mod+t2%mod)%mod+t3%mod)%mod+t4%mod)%mod;
}



int main()
{
	int T;
	cin>>T;
	for(int i=0;i<10;i++)for(int j=0;j<1801;j++)for(int k=0;k<301;k++)dp[i][j][k]=-1;
	while(T--)
	{
		ll r,b,l;
		scanf("%lld%lld%lld",&r,&b,&l);
		if(r>b*6) printf("0\n");
		else printf("%lld\n",ways(l,r,b));
	}
	return 0;
}