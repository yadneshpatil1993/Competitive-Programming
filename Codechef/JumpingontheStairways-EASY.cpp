#include <bits/stdc++.h>
using namespace std;
#define LL long long int 

LL dpA[1002]={0};
LL dpB[1002]={0};
LL A[1002];
LL B[1002];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL N,K,P;
		cin>>N>>K>>P;
		for(int i=1;i<=N;i++)cin>>A[i];
		for(int i=1;i<=N;i++)cin>>B[i];

		dpA[0]=0;
		dpB[0]=0;
		dpA[1]=A[1];
		dpB[1]=B[1];	
		for(int i=2;i<=N;i++)
		{
			LL t2=1;
			int temp=max(i-K,t2);
			dpA[i]=dpA[temp]+A[i];
			dpB[i]=dpB[temp]+B[i];
			for(int j=temp;j<i;j++)
			{
				dpA[i]=min(dpA[j]+A[i],dpA[i]);
			}
			for(int j=temp;j<i;j++)
			{
				dpA[i]=min(dpB[j]+A[i]+P,dpA[i]);
			}
			for(int j=temp;j<i;j++)
			{
				dpB[i]=min(dpB[j]+B[i],dpB[i]);
			}
			for(int j=temp;j<i;j++)
			{
				dpB[i]=min(dpA[j]+B[i]+P,dpB[i]);
			}
		}	
		for(int i=1;i<=N;i++)
		{
			cout<<dpA[i]<<" ";
		}
		cout<<endl;
		for(int i=1;i<=N;i++)
		{
			cout<<dpB[i]<<" ";
		}
		
		cout<<min(dpB[N],dpA[N])<<endl;
	}
	return 0;
}