#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool match(int k[],int D[],int p)
{
    int j=0;
    for(j=0;j<p;j++)
    {
        if(K[j]!=D[j]) return false;

    }
    return true;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i=0,p=0;
        string I,F;
        cin>>I>>F;
        p=I.length();
        int A[p],B[p];
        for(i=0;i<p;i++)
        {
            if(I[i]=='a') A[i]=1;
            else if(I[i]=='b') A[i]=0;
            else A[i]=2;

            if(F[i]=='a') B[i]=1;
            else if(F[i]=='b') F[i]=0;
            else F[i]=2;
        }

        if(match(A,B,p))
        {

        }
        else
        {

        }


    }

    return 0;
}
