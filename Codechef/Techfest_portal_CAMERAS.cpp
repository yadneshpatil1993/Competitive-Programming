#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
ll f[100004];
int n;

void update(int a,int b)
{
   int index=a;
   while(index<=n)
   {
       f[index]++;
       index+=(index&(-index));
   }
   index=b+1;
   while(index<=n)
   {
       f[index]--;
       index+=(index&(-index));
   }
}

ll query(int a)
{
   ll sum=0;
   while(a>0)
   {
       sum+=f[a];
       a-=(a&(-a));
   }
   return sum;
}

int main()
{
   int m;
   scanf("%d%d",&n,&m);
   ll a[n+1];

   for(int i=1;i<=n;i++)f[i]=0;
   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
   }
   sort(a+1,a+n+1);
   vector <ll  > v(a+1,a+n+1);
   for(int i=0;i<m;i++)
   {
       ll x,y;
       cin>>x>>y;
       int u1,v1;
       u1=lower_bound(v.begin(),v.end(),x)-v.begin();
       v1=upper_bound(v.begin(),v.end(),y)-v.begin();
       update(u1+1,v1);
   }
   int count=0;
   for(int i=1;i<=n;i++)
   {
       if((query(i)>0))count++;
   }
   cout<<count;
}