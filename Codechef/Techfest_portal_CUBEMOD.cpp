#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

#define scanf_d(x) scanf("%d",&x)
#define cin_l(x) cin>>x
#define scanf_f(x) scanf("%lf",&x)
#define scanf_ld(x) scanf("%ld",&x)
#define scanf_lld(x) scanf("%lld",&x)
#define scanf_ull(x) scanf("%llu",&x)
#define scanf_s(x) scanf("%s",x)
#define scanf_c(x) scanf("%c",x)
#define printf_d(x) printf("%d ",x)
#define printf_ld(x) printf("%ld ",x)
#define printf_lld(x) printf("%lld ",x)
#define printf_lld_n(x) printf("%lld\n",x)
#define printf_ull(x) printf("%llu ",x)
#define printf_ull_n(x) printf("%llu\n",x)
#define printf_d_n(x) printf("%d\n",x)
#define printf_s(x) printf("%s",x)
#define printf_s_n(x) printf("%s\n",x)
#define printf_c(x) printf("%c",x);
#define printf_c_n(x) printf("%c\n",x);
#define cout_ls(x) cout<<x<<" "
#define cout_ls_n(x) cout<<x<<"\n"
ll gcd(ll a,ll b) {if(a%b==0) return b;else return gcd(b,a%b);}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,p;
        scanf_lld(a);
        scanf_lld(b);
        scanf_lld(p);
        ll A[p+1];
        A[0]=0;
        for(ll i=0;i<p;i++)
        {
            if((i*i*i)%p==1) A[i+1]=A[i]+1;
            else  A[i+1]=A[i];
        }
        ll ans= (((b+1)/p)*A[p]+A[(b+1)%p])-(( (a)/p)*A[p]+A[(a)%p]);
        printf_lld_n(ans); 
    }
}