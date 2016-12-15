#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

int main()
{
	long double a,d,n=0,i=0,j=0,count;
	cin>>a>>d>>n;
	long long int region=1;
	long double pos=d;
	count=d;
	//bool flag=false;
	while(count<=n*d+0.5)
	{
		if(pos>a)
		{
			
			long long int temp1 = (int)(pos/a);
			pos=pos-((long double)(a*temp1));
			//cout<<"temp"<<temp1<<endl;
			region=region+temp1;
			//if(pos==0)region--;
			region=(region%4);
			if(region==0)region=4;
			//flag=false;
			
		}
		
		if(pos<=a)
		{
			std::cout << std::fixed;
			//flag=true;
			//cout<<"region "<<region<<endl;
			if(region==1)
			{
				//printf("%.6f ",pos);
				cout<<setprecision(6)<<pos<<" ";
				printf("0.000000\n");
			}
			else if(region==2)
			{
				cout<<setprecision(6)<<a<<" ";
				cout<<setprecision(6)<<pos<<endl;
				
			}
			else if(region==3)
			{
				//printf("%.6f ",a-pos);
				//cout<<pos<<endl;
				cout<<setprecision(6)<<a-pos<<" ";
				cout<<setprecision(6)<<a<<endl;
				//printf("%.6f\n",a);
			}
			else if(region==4)
			{
				printf("0.000000 ");
				cout<<setprecision(6)<<a-pos<<endl;
			}
		}
		pos+=d;
		count+=d;
	}
	return 0;
}
