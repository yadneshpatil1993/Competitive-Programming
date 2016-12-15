#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n,i=0,count=0,grass=0;
		scanf("%lld",&n);
		int D[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&D[i]);
			count+=D[i];
			grass+=abs(count);
		}
		cout<<grass<<endl;	
	}
	return 0;
} 