#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int A[501][501],B[501][501];
/*
int dp(int p,int q,int n)
{
    q++;
    if(q<n)
    {
        if(p==0)temp = A[q-1][p]+min(dp(p,q,n),dp(p+1,q,n));
        else if(p==m-1)temp = A[q-1][p]+min(dp(p-1,q,n),dp(p,q,n));
        else temp = A[q-1][p]+min(dp(p-1,q,n),min(dp(p,q,n),dp(p+1,q,n)));
    }
    else
    {
        return A[q-1][p];
    }
    return temp;
}*/

int main()
{
    int test=0;
    cin>>test;
    while(test--){
    int n,T,m,i=0,j=0;
    scanf("%d",&T);
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        B[n-1][i]=A[n-1][i];
        //cout<<B[n-1][i]<<endl;
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<m;j++)
        {
            if(j==0) B[i][j]=A[i][j]+min(B[i+1][j],B[i+1][j+1]);
            else if(j==m-1) B[i][j]=A[i][j]+min(B[i+1][j-1],B[i+1][j]);
            else B[i][j]=A[i][j]+min(min(B[i+1][j-1],B[i+1][j]),B[i+1][j+1]);
        }
    }


    int result=9999999;
    for(i=0;i<m;i++)
    {
        result=min(result,B[0][i]);
    }
    //cout<<result<<endl;
    if(result<T) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}
