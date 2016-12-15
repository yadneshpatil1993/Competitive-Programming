#include<iostream>
using namespace std;


int main()
{
    long long int i=0,n,A[100001]={0};
    long long int B[100001]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A[temp]++;
    }
    long long int maxi=1*A[1];
    B[1]=maxi;
    for(i=2;i<100001;i++)
    {
        long long int count = i*A[i];
        if(count+B[i-2]>=maxi)
        {
            maxi = count+B[i-2];
        }
        B[i] = maxi;
    }
    cout<<maxi<<endl;
    return 0;
}
