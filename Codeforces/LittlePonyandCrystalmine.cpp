#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i=0,j=0,count=-1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i<=n/2+1) count+=2;
        else count-=2;
        int temp = (n-count)/2;
        for(j=0;j<temp;j++) printf("*");
        for(j=0;j<count;j++) printf("D");
        for(j=0;j<temp;j++) printf("*");
        printf("\n");
    }
    return 0;
}
