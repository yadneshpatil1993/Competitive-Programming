#include <bits/stdc++.h>

using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int m,n,i;
		cin>>n>>m;
		long long int A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		long long int count=0;
		i=n-1;
		while(count<m && i>=0)
		{
			count+=A[i];
			i--;
		}
		if(m>count)cout<<-1<<endl;
		else cout<<n-1-i<<endl;
	}
	return 0;
}