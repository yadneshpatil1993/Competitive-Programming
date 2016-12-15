#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
   int A[10],i=0;
   for(i=1;i<10;i++) A[i]=0;
   for(i=1;i<=6;i++)
   {
       int a;
       cin>>a;
       A[a]++;
   }
   bool l=false,h=false,b=false,e=false;
   for(i=1;i<=9;i++)
   {
       if(A[i]==6)
       {
           l=true;
           e=true;
       }
       else if(A[i]==5) {l=true;b=true;h=true;}
       else if(A[i]==4) l=true;
       else if(A[i]==2) e=true;
       else if(A[i]==1 and !b) b=true;
       else if(A[i]==1 and b) h=true;
   }
   if(l and e) cout<<"Elephant\n";
   else if(l and b and h) cout<<"Bear\n";
   else cout<<"Alien\n";
   return 0;
}
