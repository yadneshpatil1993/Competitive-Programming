#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,result=1000;
    scanf("%d%d",&n,&m);
    int A[m],i;
    for(i=0;i<m;i++) scanf("%d",&A[i]);
    sort(A,A+m);
    for(i=0;i<m-n+1;i++)
    {
        if(result>A[n-1+i]-A[i]) result=A[n-1+i]-A[i];
    }
    printf("%d\n",result);
}
