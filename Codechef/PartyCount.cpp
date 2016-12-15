#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		pair <int,int> A[102];
		int gcount=0;
	
		for(int i=0;i<N;i++)
		{
			scanf("%d%d",&A[i].first,&A[i].second);
		}
		sort(A,A+N);
		int count=0;
		for(int i=0;i<N;i++)
		{
			int mini=A[i].first;
			int maxi=A[i].second;
			count=0;
			for(int j=0;j<N;j++)
			{
				if(A[j].first<=mini && A[j].second>mini)
				{
					if(maxi>A[j].second)
						{
							maxi=A[i].second;
						}
					count++;
				}
				else if(mini<=A[j].first && A[j].first<maxi)
				{
						mini=A[j].first;
						if(A[j].second<maxi)
						{
							maxi=A[j].second;
						}
						count++;
				}
			}
			gcount=max(count,gcount);
		}
		cout<<gcount<<endl;
	}
	return 0;
}