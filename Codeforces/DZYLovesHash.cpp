#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p,n;
	cin>>p>>n;
	int H[300]={0};
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		if(H[temp%p]!=0)
			{
				cout<<i+1<<endl;
				return 0;
			}
		else H[temp%p]=1;
	}
	cout<<-1<<endl;
	return 0;
}