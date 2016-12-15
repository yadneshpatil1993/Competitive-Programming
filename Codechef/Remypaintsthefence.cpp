#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int n,m,i=0,count=1;
		cin>>n>>m;
		pair<long long int,char> A[100005];
		for(i=0;i<m;i++)
		{
			scanf(" %c",&A[i].second);
			//cin>>A[i].second;
			scanf("%d",&A[i].first);
			//cin>>A[i].first;
		}
		sort(A,A+m);
		for(i=1;i<m;i++)
		{
			if(A[i-1].second!=A[i].second)
			{
				count=(count*(long long int)(A[i].first-A[i-1].first))%1000000009;
			}
		}
 
		printf("%lld\n",count);
	}
	return 0;
}
 
