#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)
{
   cin>>a[i];
}
int dp1[n+2];
int dp2[n+2];
dp1[1]=1;
dp2[0]=0;
dp2[n]=1;
a[0]=0;
dp1[0]=0;
for(int i=2;i<=n;i++)
{
   if(a[i]>a[i-1])dp1[i]=dp1[i-1]+1;
   else dp1[i]=1;
}
for(int i=n-1;i>=1;i--)
{
   if(a[i]<a[i+1])dp2[i]=dp2[i+1]+1;
   else dp2[i]=1;
}

long long int x=2;
for(int i=2;i<=n;i++)
{
       if(dp2[i]+dp1[i-2]+1>x && a[i]-a[i-2]>1)x=dp2[i]+dp1[i-2]+1;
}
cout<<x;
}