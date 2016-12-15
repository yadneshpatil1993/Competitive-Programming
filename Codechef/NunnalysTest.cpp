#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long int n,i=0,squaresum=0;
        cin>>n;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                squaresum=(squaresum+(i*i))%1000000007;
                if(i!=sqrt(n))
                squaresum=(squaresum+(n/i*n/i))%1000000007;
            }
        }
        cout<<squaresum<<endl;
    }
    return 0;
}
