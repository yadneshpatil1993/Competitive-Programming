#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,maxi,mini,temp;
		cin>>N>>M;
		cin>>temp;
		maxi=mini=temp;
		for(int i=1;i<M;i++)
		{
			cin>>temp;
			if(temp>maxi)maxi=temp;
			else if(temp<mini) mini=temp;
		}

		for(int i=0;i<N;i++)
		{
			cout<<max(abs(maxi-i),abs(mini-i))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
