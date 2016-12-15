#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int rules [19][19]={0};
int sat	[19]={0};
int main()
{
	ll n,m,k,gcount=0,lcount=0;
	cin>>n>>m>>k;
	for(ll i=1;i<=n;i++)scanf("%d",&sat[i]);
	for(ll i=1;i<=k;i++)
	{
		int x,y,c;
		scanf("%d%d%d",&x,&y,&c);
		//cin>>x>>y>>c;
		rules[x][y]=c;
	}	
	vector<ll> A;
	for(ll i=1;i<=n;i++)A.push_back(i);
	do{
		int t1= A[0];
		lcount=sat[t1];
		for(ll i=1;i<m;i++)
		{
			int t2 = A[i];
			lcount+=sat[t2];
			lcount+=rules[t1][t2];
			t1=t2;
		}
		if(lcount>gcount)gcount=lcount;
	}while(next_permutation(A.begin() , A.end()));
	cout<<gcount<<endl;	
	return 0;
}