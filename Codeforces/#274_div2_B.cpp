#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
	int n,k,i=0,operation[1001][2];
	LL count=0;
	pair <int,int> A[102];
	cin>>n>>k;
	A[0].first=0;
	for(i=1;i<=n;i++)
	{
		cin>>A[i].first;
		count+=A[i].first;
		A[i].second=i;
	}
	sort(A,A+n+1);
	LL temp= count/n;
	LL temp2 = count%n;
	for(i=1;i<=k;i++)
	{
		int t1=0,t2=0;
		for(int j=1;j<=n;j++)
		{
			if(A[j].first==temp)t1++;
			else if(A[j].first==temp+1)t2++;

			if(t1==(n-temp2)&&t2==temp2)
			{
				if(temp2==0)cout<<0<<" "<<i-1<<endl;
				else cout<<1<<" "<<i-1<<endl;
				for(int p=1;p<=i-1;p++)
				{
					cout<<operation[p][0]<<" "<<operation[p][1]<<endl;
				}
				return 0;
			}
		}
		sort(A,A+n+1);
			operation[i][0]=A[n].second;
			operation[i][1]=A[1].second;
			A[n].first--;
			A[1].first++;
	}
    sort(A,A+n+1);
	cout<<A[n].first-A[1].first<<" "<<k<<endl;
	for(i=1;i<=k;i++)
	{
		cout<<operation[i][0]<<" "<<operation[i][1]<<endl;
	}
	return 0;
}
