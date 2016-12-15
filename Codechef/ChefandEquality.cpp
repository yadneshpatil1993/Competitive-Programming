#include <bits/stdc++.h>
using namespace std;

int A[100002];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,maxi=0;
		cin>>N;
		for(int i=0;i<100002;i++)A[i]=0;

		for(int i=0;i<N;i++)
		{
			int tmp;
			cin>>tmp;
			A[tmp]++;
		}
		for(int i=0;i<100002;i++)
		{
			maxi=max(maxi,A[i]);
		}
		cout<<N-maxi<<endl;
	}
	return 0;
}