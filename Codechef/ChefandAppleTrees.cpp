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
		int A[N],count=0;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		sort(A,A+N);
		for(int i=N-1;i>0;i--)
		{
			if(A[i]>A[i-1])count++;
		}
		printf("%d\n",count+1);
	}
	return 0;
}