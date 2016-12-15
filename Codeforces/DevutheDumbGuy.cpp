#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,x,count=0;
    cin>>n>>x;
    int A[n],i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+n);
    for(i=0;i<n;i++)
    {
        count += (long long int)A[i]*x;
        if(x>1) x--;
    }
    cout<<count<<endl;
    return 0;
}
