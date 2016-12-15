#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1],B[n+1],i=0,maxi=0,sum=0;
    B[0]=0;
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
        if(A[i]==0) B[i]=B[i-1]+1;
        else
        {
            B[i] = B[i-1]-1;
            if(B[i]<0) B[i]=0;
        }
        //cout<<B[i]<<endl;
    }
    if(sum==n)
    {
        printf("%d\n",sum-1);
        return 0;
    }

    int temp;
    for(i=1;i<n+1;i++)
    {
        if(B[i]>=maxi){ maxi = B[i];temp=i;}
    }
    sum+=maxi;

    printf("%d\n",sum);

    return 0;
}
