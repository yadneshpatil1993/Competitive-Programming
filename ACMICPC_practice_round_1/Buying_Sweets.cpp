#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <cassert>
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n+1];
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        sort(A+1,A+n+1);
        int sweets=sum/k;
        int sweets1=(sum-A[1])/k;
        if(sweets==sweets1) cout<<-1<<endl;
        else cout<<sweets<<endl;
    }
}