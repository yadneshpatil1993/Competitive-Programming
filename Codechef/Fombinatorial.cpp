#include <bits/stdc++.h>
#define LL unsigned long long int
using namespace std;
unsigned long long int MOD = 18446744073709551615;

LL power(LL x, LL y)
{
    LL temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%MOD;
    else
        return (((x*temp)%MOD)*temp)%MOD;
}

 LL fact[100002],multi[100002];

int main()
{
    
    LL T;
    cin>>T;
    while(T--)
    {
        LL N,M,Q;
        scanf("%lld%lld%lld",&N,&M,&Q);
        LL i=0;
        fact[0]=1;
        for(i=1;i<=N;i++)
        {
           		fact[i]=(fact[i-1]*i)%MOD;
        }
        multi[0]=1;
        for(i=1;i<=N;i++)
        {
        	multi[i]=(multi[i-1]*fact[i])%MOD;
        }
        LL res0 = power(fact[N],N)%MOD;
        while(Q--)
        {
            LL r,res1,res2,final1;
            scanf("%lld",&r);
            res1 = power(fact[N-r],N-r)%MOD;
            res2 = power(fact[r],r)%MOD;
            final1 = (((multi[r-1]*multi[N-r-1])%MOD)*res0)%MOD;         
            final1 = final1/multi[N-1];
            final1 /=res1;
            final1 /=res2;
            printf("%lld\n",final1%M);
        }
    }   
    return 0;
}