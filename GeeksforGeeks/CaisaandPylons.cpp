#include<iostream>

using namespace std;

int main()
{
    long long int n,i=0;
    cin>>n;
    long long int temp1,max=0;
    for(i=1;i<n+1;i++)
    {
        cin>>temp1;
        if(max<temp1) max=temp1;
    }
    cout<<max<<endl;
    return 0;
}
