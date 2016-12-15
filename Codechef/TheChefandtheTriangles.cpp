#include <bits/stdc++.h>
#define LL long long int
using namespace std;
#define MOD 1000000007 
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
    int T;
    cin>>T;
    while(T--)
    {
        LL n,k;
        cin>>n>>k;
        LL temp1;
        cout<<nCr(n,3)-nCr(k,3)<<endl;
    }
    return 0;
}