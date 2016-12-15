#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       long long int t;
       cin>>t;
       int m=1;
       bool flag=true;
       while(t>m)
       {
           t-=m;
           m++;
            if(flag)flag=false;
           else flag=true;
       }
       if(!flag) cout<<t<<"/"<<m+1-t<<"\n";
       else cout<<m+1-t<<"/"<<t<<"\n";
   }
}
