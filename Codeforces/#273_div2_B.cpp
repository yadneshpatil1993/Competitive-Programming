#include <bits/stdc++.h>
# define LL long long int
using namespace std;

LL GCD(LL a, LL b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}
LL nCr(LL n, LL r)
{
    LL ans=1;
    for(LL i=1;i<=r;i++)
    {
        LL d=GCD(ans,i);
        ans/=d;
        ans=ans*((n-i+1)/(i/d));
        ans= ans;
    }
    return ans;
}


int main()
{
	LL n,m;
	cin>>n>>m;
	LL temp;
	temp = n%m;
	LL temp_min1 = nCr(n/m,2);
	LL temp_min2 = nCr((n/m)+1,2);
	LL kmin = temp_min1*(m-n%m)+temp_min2*(n%m);

	LL kmax1 = nCr(n-m+1,2);
	cout<<kmin<<" "<<kmax1<<endl;
	return 0;
}