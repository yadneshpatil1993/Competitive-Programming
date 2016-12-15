#include <bits/stdc++.h>
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
#define gc getchar_unlocked
ll gcd(ll a,ll b) {if(a%b==0) return b;else return gcd(b,a%b);}
struct arr
{
    int a,b;
};
inline int getn()
{
	int n = 0, c = gc();
	while(c < '0' || c > '9') c = gc();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = gc();
	return n;
}
int main()
{
    int t=getn(); ;
    while(t--)
    {
        map<int,int> M;
        map<int,int> :: iterator it;
        int n,m;
        n=getn();
        m=getn();
        for(int i=1;i<=n;i++)
        {
            int a;
             a=getn();
            M[a]++;
        }
        int sizeM=M.size();
        arr A[n+1];
        int index=1;
        ll trup=0;
        int secon=0;
        for(it=M.begin();it!=M.end();it++)
        {
            A[index].a=it->first;
            A[index].b=it->second;
            if(A[index].b>=3 and (A[index].a)*3<=m ) trup++;
            index++;
        }
        int nn=index-1;
        for(ll i=1;i<=nn-2;i++)
        {
            ll k=nn;
            for(ll j=i+1;j<k;j++)
            {
                while(k>j and A[i].a+A[j].a+A[k].a>m) k--;
                trup+=k-j;
            }
        }
        for(int i=1;i<=nn;i++)
        {
            if(A[i].b>=2 and 2*A[i].a<=m)
            {
                for(int j=1;j<=nn;j++)
                {
                    if(i!=j and 2*A[i].a+A[j].a<=m) trup++;
                }
            }
        }
        printf("%lld\n",trup);
    }
}