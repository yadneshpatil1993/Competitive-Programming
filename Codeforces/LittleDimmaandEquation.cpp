#include<iostream>
#include<math.h>
using namespace std;
inline long long Pow(long long x, long long p)
{
    long long sol=1;
    for(int i=1;i<=p;++i)
        sol=sol*x;
    return sol;
}

long long int sum(long long int x)
{
if(x>0){
 long long int temp=0;
   while(x>0)
   {
      temp+=(x%10);
      x/=10;
   }
   return temp;
}
return 0;
}


int main()
{
    long long int a,b,c,i=0,p1,p2,y,A[100],j=0;
    cin>>a>>b>>c;
    for(i=1;i<=81;i++)
    {
        p1 = (long long int)Pow(i,a);
        p2 = (long long int)p1*b+c;
        y=sum(p2);
        if(y==i && p2<1000000000)
        {
            A[j]=p2;
            j++;
        }
    }
    if(j>0){
    cout<<j<<endl;
    for(i=0;i<j;i++)
    {
        cout<<A[i]<<" ";
    }
    }
    else
    {
        cout<<j;
    }
    return 0;
}
