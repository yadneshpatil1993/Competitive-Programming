#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n],B[m][3],i=0;
    for(i=0;i<n;i++) scanf("%d",&A[i]);
    sort(A,A+n);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&A[i][0],&A[i][1]);
        A[i][2]=0;
    }
    for(i=0;i<n;i++)
    {

    }
    return 0;
}
