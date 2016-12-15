#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll data[1000002]={0};
ll open[1000002]={0};
ll close[1000002]={0};
int main()
{	
	int T;
	cin>>T;
	while(T--)
	{
		ll N,H;
		scanf("%lld%lld",&N,&H);
		for(ll i=0;i<=N;i++)
		{
		    data[i]=0;
		    open[i]=0;
		    close[i]=0;
		}
		for(ll i=0;i<N;i++)
		{
			ll l,r;
			scanf("%lld%lld",&l,&r);
			open[l]++;
			close[r]--;
		}
		ll count=0;
		for(ll i=0;i<N;i++)
		{
			if(open[i]>=0)
			{
			    count+=open[i];
		        data[i]=count;
			}
			if(close[i]<0)
			{
			    data[i]=count;
			    count+=close[i];
			}
		}
//		for(ll i=0;i<N;i++)cout<<data[i]<<endl;
		ll sum=0;
		for(ll i=0;i<H;i++)
		{
			sum+=data[i];
		}
		ll maxsum=sum;
		for(ll i=1;i<=N-H;i++)
		{
			sum=sum+data[H+i-1]-data[i-1];
			if(sum>maxsum)maxsum=sum;
		}
		cout<<(N*H)-maxsum<<endl;		
	}
	return 0;
} 