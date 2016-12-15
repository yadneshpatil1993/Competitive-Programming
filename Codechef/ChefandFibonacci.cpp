#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL MOD = 1000000007;
LL GCD(LL a, LL b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}



int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL A,B;
		cin>>A>>B;
		LL a=1,b=1,c=0;
		LL g = GCD(A,B); 
		if(g==1 || g==2)cout<<1<<endl;
		else
		{
			for(LL i=3;i<=GCD(A,B);i++)
			{
				c = (a%MOD+b%MOD)%MOD;
				a=b;
				b=c;
			}
			cout<<c<<endl;
		}	
	}
	return 0;
}
