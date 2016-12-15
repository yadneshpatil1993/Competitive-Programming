#include <bits/stdc++.h>
using namespace std;
long long int A[100000],B[20],sum[100000],visited[100000]={0};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int i,N,temp=0;
		cin>>N;
		temp=pow(2,N);
		for(i=0;i<temp;i++)
		{
			scanf("%lld",&A[i]);
		}
		for(i=0;i<temp;i++)visited[i]=0;
		sort(A,A+temp);
		if(N>1)
		{
			i=3;
			int j=2;
			int p=3;
			B[0]=A[1];
			B[1]=A[2];
			sum[0]=A[1];
			sum[1]=A[2];
			sum[2]=A[1]+A[2];
			while(j<N)
			{
				bool flag = false;
				for(int t=2;t<p;t++)
				{
					if(A[i]==sum[t]&&visited[t]==0)
					{
					    visited[t]=1;
						flag=true;
						break;
					}
				}
				if(!flag)
				{
					B[j]=A[i];
					j++;
					sum[p]=A[i];
					visited[p]=1;
					for(int t=0;t<p;t++)
					{
						sum[p+t+1]=sum[t]+A[i];
					}
					p+=p+1;
				}
				i++;
			}
		}
		else
		{
			B[0]=A[1];
		}
		for(int s=0;s<N;s++)
		{
			cout<<B[s]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
