#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,M,i=0,j=0,seat[401]={0},count[401]={0},clean=0;
        scanf("%d%d",&N,&M);
        int A[M];
        for(i=0;i<M;i++)
        {
           scanf("%d",&A[i]);
        }
        for(i=0;i<M;i++)
        {
            if(j<N)
            {
                if(seat[A[i]]==0)
                {
                    seat[A[i]]=1;
                    clean++;
                    j++;
                }

            }
            else
            {
                if(seat[A[i]]==0)
                {
                    int k=0;
                    int temp=0;
                    for(k=i+1;k<M;k++)
                    {
                        if(seat[A[k]]==1 && count[A[k]]==0)
                        {
                            count[A[k]]++;
                            temp = A[k];
                        }
                    }
                    for( k=0;k<401;k++)
                    {
                        if(seat[k]==1 && count[k]==0)
                        {

                            temp = k;
                            break;
                        }
                    }
                    for(k=0;k<401;k++)
                    {
                        count[k]=0;
                    }
                    seat[temp]=0;
                    seat[A[i]]=1;
                    clean++;
                }
            }
        }
        printf("%d\n",clean);
    }
    return 0;
}
