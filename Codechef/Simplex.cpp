#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float n,k;
		cin>>n>>k;
		printf("%.6f\n",(n-1)/(n*(n-1-k)));
	}
	return 0;
}	