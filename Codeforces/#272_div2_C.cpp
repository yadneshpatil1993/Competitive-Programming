#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define mod 1000000007
int main()
{
   ll a,b;
   cin>>a>>b;
   ll t = (b*(b-1)/2)%mod;
   ll t2 = (((a*(a+1)/2)%mod)*b)%mod;
   t2 = (t2+a)%mod;
   cout<<(t*t2)%mod<<endl;
}
