#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,count=1,i;
	cin>>N;
	while(i<32)
	{
		if(N&(1<<i))cout<<count<<" ";
		count*=2;
		i++;
	}
}
