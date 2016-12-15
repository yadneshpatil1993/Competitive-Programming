#include <bits/stdc++.h>
using namespace std;
int A[100002]={0};
int B[100002]={0};
pair <int,int> friends[100002];

int main() {
    int n,m,i=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        {
        A[i]=i;
    }
    int p,q;
    for(i=1;i<=m;i++)
        {
        cin>>p>>q;
       if(p>q)
           {
           friends.first
       }
    }
    for(i=1;i<=m;i++)
        {
        if(p>=q)
            {
            if(A[p]!=p)
            A[p]=q;
        }
        else
            {
            A[q]=p;
        }
    }
    for(i=1;i<=n;i++)
        {
        if(A[i]!=i)
            {
            A[i]=A[A[i]];
        }
    }
    for(i=1;i<=n;i++)
        {
        B[A[i]]++;
    }
    long long int cost=0;
    for(i=1;i<=n;i++)
        {
        double t=0;
        t=sqrt(B[i]);
        if(t==(int)t)cost+=t;
        else cost+=t+1;
    }
    cout<<cost<<endl;
    return 0;
}
