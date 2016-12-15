#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long int

LL power(LL n,LL x)
{
    if(x==0) return 1;
    LL temp=power(n,x/2);
    if(x%2==0) return (temp*temp);
    else return ((n*temp)*temp);
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL N,i=1,j=0,count=0;
		cin>>N;
		while(count<N)
		{
			count+=power(7,i);	
			i++;
		}
		
		if(count==N)
		{
			i--;
			while(i--)cout<<"v";
			cout<<endl;	
		}
		else
		{
			LL temp = N-(count-power(7,i-1));
			i--;
			while(i>0)
			{
				i--;
				double t2 = (double)(temp/power(7,i));
				temp=temp%power(7,i);
				if(t2<=1 && t2!=0)cout<<"d";
				else if(t2<=2)cout<<"h";
				else if(t2<=3)cout<<"a";
				else if(t2<=4)cout<<"p";
				else if(t2<=5)cout<<"u";
				else if(t2<=6)cout<<"s";
				else if(t2<=7 || t2==0)cout<<"v";
				
			}
			cout<<endl;
		}
	}
	return 0;
}
