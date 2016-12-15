#include <bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define Fill(s,v) memset(s,v,sizeof(s))
#define pb push_back
#define for_a_to_b(i,a,b) for(int i=a; i<b; ++i)
#define for_b_to_a(i,a,b) for(int i=a; i>b; --i)
#define for_0_to_a(i,a) for(int i=0; i<a; ++i)


#define d_for_a_to_b(i,a,b) for(i=a; i<b; ++i)
#define d_for_b_to_a(i,a,b) for( i=a; i>b; --i)
#define d_for_0_to_a(i,a) for( i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!='\0'; ++n)

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

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int T, Ds, Dt, D, res;
  int sum, mx;

  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=2013 );
  while(T--){
    assert( scanf("%d%d%d",&Ds,&Dt,&D)==3 );
    assert( 1<=Ds && Ds <= 2013 );
    assert( 1<=Dt && Dt <= 2013 );
    assert( 1<=D  && D  <= 2013 );

    sum = Ds + Dt + D;
    mx = Ds; if(mx < Dt) mx = Dt; if(mx < D) mx = D;

    res = mx - (sum-mx);
    if(res < 0) res = 0;
    printf("%d\n",res);
  }

  return 0;
}