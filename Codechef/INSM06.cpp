#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int m,n,i=0,j=0;
    scanf("%d%d",&n,&m);
    int A[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    while(m--)
    {
        int ang=0;
        scanf("%d",&ang);
        ang=ang%360;
        if(ang==0)
        {
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                    printf("%d ",A[i][j]);
                    }
                    printf("\n");
                }
        }
        else if(ang==90)
        {
                for(j=0;j<n;j++)
                {
                    for(i=n-1;i>=0;i--)
                    {
                        printf("%d ",A[i][j]);
                    }
                    printf("\n");
                }
        }
        else if(ang==180)
        {
                for(i=n-1;i>=0;i--)
                {
                    for(j=n-1;j>=0;j--)
                    {
                        printf("%d ",A[i][j]);
                    }
                    printf("\n");
                }
        }
        else if(ang==270)
        {
                for(j=n-1;j>=0;j--)
                {
                    for(i=0;i<n;i++)
                    {
                        printf("%d ",A[i][j]);
                    }
                    printf("\n");
                }

        }
    }
    return 0;

}
