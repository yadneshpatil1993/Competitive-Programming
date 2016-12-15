#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i=0;
    for(i=0;i<n;i++) cin>>A[i];
    sort(A,A+n);
    for(i=0;i<n;i++) cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
