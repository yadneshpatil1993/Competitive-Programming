#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL power(LL n,LL x)
{
    if(x==0) return 1;
    LL temp=power(n,x/2);
    if(x%2==0) return (temp*temp);
    else return ((n*temp)*temp);
}

int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		LL l,r;
		cin>>l>>r;
		if(l==r)cout<<l<<endl;
		else{
		LL bits = log2(l^r)+1;
		LL z=r>>bits;
		z=z<<bits;
		LL x=r^z;
		if(!(x&(x+1)) && x>0)cout<<r<<endl;
        else
        {
        	cout<<z+power(2,bits-1)-1<<endl;
        }
		}
	}
}