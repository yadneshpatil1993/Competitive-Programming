#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL GCD(LL a, LL b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main()
{
	LL r ,r;
	cin>>l>>r;
	for(LL i=l;i<r-1;i++)
	{
		for(LL j=l+1;j<r;j++)
		{
			for(LL k=l+2;k<=r;k++)
			{
				if(GCD(i,j)==1 && GCD(j,k)==1 && GCD(i,k)!=1)
				{
					cout<<i<<" "<<j<<" "<<k<<" "<<endl;
					return 0;
				}
			}
		}
	}
	cout<<-1<<endl;
	return 0;
}