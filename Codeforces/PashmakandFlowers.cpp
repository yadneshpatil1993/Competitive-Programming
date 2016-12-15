#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    long long int count1=0,count2=0,temp1=0,temp2=0;
    temp1 = A[0];
    i=0;
    while(A[i]==temp1)
    {
        count1++;
        i++;
    }
    temp2=A[n-1];
    i=n-1;
    while(temp2==A[i])
    {
        count2++;
        i--;
    }
    if(count1==n || count2==n)
    {
        cout<<A[n-1]-A[0]<<" "<<n*(n-1)/2<<endl;
    }
    else
    {
        cout<<A[n-1]-A[0]<<" "<<count1*count2<<endl;
    }
    return 0;
}
