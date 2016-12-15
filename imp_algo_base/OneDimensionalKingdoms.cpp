#include <bits/stdc++.h>

using namespace std;

pair<int, int> P[100002];

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&P[i].first);
			scanf("%d",&P[i].second);
		}
		sort(P,P+N);
		int bombs=1,rmin=P[0].second,l=0;
		for(int i=0;i<N;i++)
		{
			l=P[i].first;
			if(l<=rmin)
			{
				rmin=min(rmin,P[i].second);
			}
			else
			{
				rmin=P[i].second;
				bombs++;
			}
		}
		printf("%d\n",bombs);
	}
	return 0;
}