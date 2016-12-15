#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		double R,x[3],y[3],p[3];
		cin>>R;
		for(int i=0;i<3;i++)
		{
			cin>>x[i]>>y[i];
		}
		p[1]=sqrt(((x[1]-x[0])*(x[1]-x[0]))+((y[1]-y[0])*(y[1]-y[0])));
		p[2]=sqrt(((x[2]-x[1])*(x[2]-x[1]))+((y[2]-y[1])*(y[2]-y[1])));
		p[3]=sqrt(((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2])));
		int count=0;
		for(int i=0;i<3;i++)
		{
			if(p[i]<=R)count++;
		}
		if(count>=2)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	} 
	return 0;
}