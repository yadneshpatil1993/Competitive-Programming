#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL A[100002],B[100002];
int main()
{
	LL N,i=0,count=0,gcount=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		scanf("%lld%lld",&A[i],&B[i]);
	}
	for(i=0;i<N;i++)
	{
		if(A[i]>=count)
			{
				gcount=gcount+A[i]-count;
				count=0;
			}
		else
		{
			count-=A[i];
		}
		count+=B[i];
	}
	cout<<gcount<<endl;
	return 0;
}
