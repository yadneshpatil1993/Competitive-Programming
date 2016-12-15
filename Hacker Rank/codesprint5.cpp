#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int n,q,i=0;
    cin>>n>>q;
    int A[n+1],pos[n+1],color[n+1];
    for(i=1;i<=n;i++)
        {
        cin>>A[i];
        pos[A[i]]=i;
    }
    while(q--)
        {
        int t1,x1,x2;
        cin>>t1;
        if(t1==1)
            {
            cin>>x1>>x2;
            int temp=pos[x1];
            pos[x1]=pos[x2];
            pos[x2]=temp;
        }
        else if(t1==2)
            {
            cin>>x1;
            for(i=1;i<n;i++)color[i]=0;
            int j=1;
            for(j=1;j<=x1;j++)
                {
                color[pos[j]]=1;
            }
            int flag=0,iceland=0;
            for(j=1;j<=n;j++)
                {
                if(color[j]==1)
                    {
                    if(flag==0)
                    {
                        iceland++;
                        flag=1;
                    }
                }
                else
                    {
                    flag=0;
                }
            }
            cout<<iceland<<endl;
           
        }
    }
    return 0;
}
