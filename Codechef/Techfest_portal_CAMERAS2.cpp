#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,q,i=0,a,b;
    cin>>n>>q;
    ll A[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&A[i][0],&A[i][1]);
    }
    for(i=0;i<q;i++)
    {
        ll count=0;
        scanf("%lld%lld",&a,&b);
        for(int j=0;j<n;j++)
        {
            if((a<=A[j][0]&&b>=A[j][1]) || (a<=A[j][0]&&b<=A[j][1]&&b>=A[j][0]) || (a>=A[j][0]&&b<=A[j][1]) || (a>=A[j][0]&&b>=A[j][1]&&a<=A[j][1]))
            {
                count++;
            }
        }
         cout<<count<<endl;

    }
    return 0;
}
