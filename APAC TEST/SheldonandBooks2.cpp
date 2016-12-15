#include<iostream>
#include<math.h>

using namespace std;

int s[1000000];
int main()
{
   int T;
   cin>>T;
   for(int i=0;i<T;i++)
   {
       long long int n,k;
       cin>>n>>k;
       long long int A[k+1];
       for(int i=1;i<=k;i++)
       {
           A[i]=0;
       }

      long long  int max=((double)sqrt(8*n+1)-1)/2;
      long long  int iter=max/k;
        for(long long int i=1;i<=k;i++)
       {
          A[i]=iter*(2*i+(iter-1)*k)/2;
       }
      long long  int xsum=(k*iter)*(k*iter+1)/2;
       n-=xsum;
       for(long long int i=1;i<=k;i++)
       {
          if(n>(k*iter+i))
          {
              A[i]+=(k*iter+i);
              n-=(k*iter+i);
          }
          else
          {
              A[i]+=n;
              n=0;
          }
       }
       for(long long int i=1;i<=k;i++)
       {
           cout<<A[i]<<" ";
       }
           cout<<"\n";
       }

   }
