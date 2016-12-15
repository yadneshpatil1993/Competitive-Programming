#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    int n,m,k,i=0;
    cin>>n>>m>>k;

    int player[m+1],friend1=0;

    for(i=0;i<m+1;i++)
    {
        scanf("%d",&player[i]);
    }

    int fedor[21]={0};
    int t=0,temp;

    temp = player[m];
    while(temp>0)
    {
        fedor[t]=temp%2;
        t++;
        temp = temp/2;
    }

    for(i=m-1;i>=0;i--)
    {
        int A[21]={0};
        int l=0;
        int a = player[i],count=0;
        while(a>0)
        {
            A[l]=a%2;
            l++;
            a= a/2;
        }
        for(int j=0;j<n;j++)
        {
            if(A[j]!=fedor[j])count++;
        }
        if(count<=k) friend1++;
    }
    cout<<friend1<<endl;
    return 0;
}
