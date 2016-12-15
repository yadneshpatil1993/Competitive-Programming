#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include<cstring>
using namespace std;
struct temp
{
    int a,b;
};
bool compairison(temp a,temp b)
{
    return a.a<b.a;
}
int main()
{
    int n,i=0;
    cin>>n;
    temp A[n+1];
    int h[2001];
    for(i=0;i<=2000;i++) h[i]=0;
    for(i=1;i<=n;i++)
    {
        cin>>A[i].a;
        h[A[i].a]++;
        A[i].b=i;
    }
    bool b=true,b1=true,b2=true;
    for(i=1;i<=2000 and b and (b1 or b2);i++)
    {
        if(h[i]==2 and b1)
        {
            b1=false;
        }
        else if(h[i]==2 and !b1)
        {
            b2=false;
        }
        if(h[i]>=3)
        {
            b=false;
        }
    }
    sort(A+1,A+n+1,compairison);
    int temp2[n+1][3];
    bool p=true;
    bool c1=true,c2=true;
    if(!b)
    {
        cout<<"YES\n";
        for(i=1;i<=n;)
        {
            if(h[A[i].a]>=3 and p)
            {
                temp2[i][0]=A[i].b;
                temp2[i][1]=A[i].b;
                temp2[i][2]=A[i+1].b;
                temp2[i+1][0]=A[i+1].b;
                temp2[i+1][1]=A[i+2].b;
                temp2[i+1][2]=A[i].b;
                temp2[i+2][0]=A[i+2].b;
                temp2[i+2][1]=A[i+1].b;
                temp2[i+2][2]=A[i+2].b;
                p=false;
                i+=3;
            }
            else
            {
                temp2[i][0]=A[i].b;
                temp2[i][1]=A[i].b;
                temp2[i][2]=A[i].b;
                i++;
            }
        }
        for(i=1;i<=n;i++) cout<<temp2[i][0]<<" ";
        cout<<endl;
        for(i=1;i<=n;i++) cout<<temp2[i][1]<<" ";
        cout<<endl;
        for(i=1;i<=n;i++) cout<<temp2[i][2]<<" ";
        cout<<endl;
    }
    else if((!b1 and !b2))
    {
        cout<<"YES\n";
    for(i=1;i<=n;)
    {
        if(h[A[i].a]==2 and c1)
        {
            temp2[i][0]=A[i].b;
            temp2[i][1]=A[i+1].b;
            temp2[i][2]=A[i].b;
            temp2[i+1][0]=A[i+1].b;
            temp2[i+1][1]=A[i].b;
            temp2[i+1][2]=A[i+1].b;
            i+=2;
            c1=false;
        }
        else if(h[A[i].a]==2 and !c1 and c2)
        {
            temp2[i][0]=A[i].b;
            temp2[i][1]=A[i].b;
            temp2[i][2]=A[i+1].b;
            temp2[i+1][0]=A[i+1].b;
            temp2[i+1][1]=A[i+1].b;
            temp2[i+1][2]=A[i].b;
            i+=2;
            c1=false;

        }
        else
        {
            temp2[i][0]=A[i].b;
            temp2[i][1]=A[i].b;
            temp2[i][2]=A[i].b;
            i++;
        }
         }
         for(i=1;i<=n;i++) cout<<temp2[i][0]<<" ";
        cout<<endl;
        for(i=1;i<=n;i++) cout<<temp2[i][1]<<" ";
        cout<<endl;
        for(i=1;i<=n;i++) cout<<temp2[i][2]<<" ";
        cout<<endl;
    }
    else cout<<"NO\n";

}
