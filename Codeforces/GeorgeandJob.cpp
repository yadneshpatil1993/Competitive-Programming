#include <iostream>
#include <stdio.h>

using namespace std;

inline long long int max(long long int a,long long int b){return a>b?a:b;}

long long int p[5010];
long long int pair1[5010][5010];

int main()
{
    long long int n,m,k,i=0,j=0,l=0;
    cin>>n>>m>>k;

    for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<=n;i++)pair1[i][0]=0;
    for(i=0;i<=k;i++)pair1[0][i]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i<j*m)
            {
                pair1[i][j]=0;
            }
            else
            {
                long long int sum=0;
                for(l=i;l>i-m;l--)sum+=p[l];
                pair1[i][j] = max(pair1[i-m][j-1]+sum,pair1[i-1][j]);
            }
        }
    }
    long long int maxi=0;
    for(i=1;i<=n;i++)
    {
        if(maxi<pair1[i][k])maxi=pair1[i][k];
    }
    cout<<maxi;
}
