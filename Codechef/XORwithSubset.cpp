#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K,maxi=0,temp=0;
		cin>>N>>K;
		int A[N];
		for(int i=0;i<N;i++)scanf("%d",&A[i]);
		maxi = K^0;
		for(int i=0;i<N;i++)
		{
			temp=0;
			for(int j=i;j<N;j++)
			{
				temp = temp^A[j];
				if(maxi>K^temp)maxi=K^temp;
			}
		}
		printf("%d\n",maxi);	
	}
	return 0;
}