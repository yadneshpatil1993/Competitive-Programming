#include <bits/stdc++.h>
#define LL long long int
using namespace std;
#define MOD 1000000007 

bool isprime(LL n)
{
    for(LL i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        LL a,b;
        cin>>a>>b;
        if(a==3)a=1;
        if(b==3)b=1;
        if(isprime(a)&&a>1)
        {
            a--;
        }
        if(isprime(b)&&b>1)
        {
            b--;
        }
        cout<<a*b<<endl;
    }
    return 0;
}