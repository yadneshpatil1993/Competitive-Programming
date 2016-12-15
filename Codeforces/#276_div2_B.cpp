#include <bits/stdc++.h>
using namespace std;
#define  LL long long int
int main()
{
	LL n;
	LL x,y,xmax,ymax,xmin,ymin;
	cin>>n;
	cin>>x>>y;
	xmax=xmin=x;
	ymax=ymin=y;
	n--;
	while(n--)
	{
		cin>>x>>y;
		if(x>xmax)xmax=x;
		else if(x<xmin)xmin=x;
		if(y>ymax)ymax=y;
		else if(y<ymin)ymin=y;
	}
	if(ymax-ymin>=xmax-xmin)cout<<(LL)(ymax-ymin)*(ymax-ymin)<<endl;
	else cout<<(LL)(xmax-xmin)*(xmax-xmin)<<endl;
	return 0;
}