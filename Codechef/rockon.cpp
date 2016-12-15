#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double speed[n],fuel[n],t;
	for(int i=0;i<n;i++)cin>>speed[i];
	for(int i=0;i<n;i++)cin>>fuel[i];
	cin>>t;
	double maxi=0;
	for(int i=0;i<n;i++)
	{
		if(f[i]==0 && s[i]==0)continue;
		if((speed[i]/fuel[i])*t>maxi)
			maxi=(speed[i]/fuel[i])*t;
	}
	printf("%0.3f\n",maxi);
}