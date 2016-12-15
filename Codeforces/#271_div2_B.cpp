#include <bits/stdc++.h>
using namespace std;
int tr[1000005];
int main()
{
   int n,p=1;
   cin>>n;
   int A[n+1];
   int B[n+1];
   B[0]=0;
   for(int i=1;i<=n;i++)
   {
       cin>>A[i];
       B[i]=A[i]+B[i-1];
   }
   for(int i=1;i<=n;i++) 
      {
        for(int j=B[i-1]+1;j<=B[i];j++) tr[j]=i;
      }
   int m;
   cin>>m;
   for(int i=1;i<=m;i++)
   {
       int q;
       cin>>q;
       cout<<tr[q]<<endl;
   }
}