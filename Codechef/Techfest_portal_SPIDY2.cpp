#include <bits/stdc++.h>
using namespace std;
long long int H[200002],mini[200002];
int main()
{
	long long int n;
	cin>>n;
	long long int power[21],i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&H[i]);
	}
	power[0]=1;
	for(i=1;i<21;i++)
	{
		power[i]=power[i-1]*2;
	}
	mini[1]=0;
	if(n>1)mini[2]=abs(H[2]-H[1]);
	for(i=3;i<=n;i++)
	{
		long long int temp=i-1;
		long long int j=1,count=abs(H[i]-H[i-1])+mini[i-1];
		while(temp>0)
		{
			if(abs(H[i]-H[temp])+mini[temp]<=count)
			{
				count = abs(H[i]-H[temp])+mini[temp];
			}
			temp=i-power[j];
			j++;
			
		}
		mini[i]=count;
	}
	cout<<mini[n]<<endl;
	return 0;
}