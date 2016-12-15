#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;
int main()
{
    int count=0,n,k,i=0;
    cin>>n>>k;
    int A[n];
    for(i=0;i<n;i++)cin>>A[i];
    sort(A,A+n);

    i=n-1;
    while(i>=0)
    {
        count+=2*(A[i]-1);

        //cout<<A[i]<<" "<<count<<endl;
        i-=k;
    }
    cout<<count<<endl;
    return 0;
}
