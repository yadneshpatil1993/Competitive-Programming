#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int r,g,b,m;
		cin>>r>>g>>b>>m;
		int R[r],G[g],B[b],i=0;
		for(i=0;i<r;i++)
		{
			cin>>R[i];
		}
		for(i=0;i<g;i++)
		{
			cin>>G[i];
		}
		for(i=0;i<b;i++)
		{
			cin>>B[i];
		}
		sort(R,R+r);
		sort(G,G+g);
		sort(B,B+b);
		while(m--)
		{
			if(R[r-1]>=G[g-1])
			{
				if(R[r-1]>=B[b-1])R[r-1]/=2;
				else B[b-1]/=2;
			}
			else
			{
				if(G[g-1]>=B[b-1])G[g-1]/=2;
				else B[b-1]/=2;	
			}	
		}
		
		int temp= max(R[r-1],max(G[g-1],B[b-1]));
		cout<<temp<<endl;
	}
	return 0;
}