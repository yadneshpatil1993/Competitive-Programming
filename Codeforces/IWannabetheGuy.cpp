#include<iostream>

using namespace std;

int main()
{
    int A[101]={0};
    int n,p,q;
    cin>>n;
    cin>>p;
    int i=0;
    for(i=0;i<p;i++)
    {
        int temp;
        cin>>temp;
        A[temp]=1;
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        int temp;
        cin>>temp;
        A[temp]=1;
    }
    int count=0;
    for(i=1;i<101;i++)
    {
        if(A[i]==1) count++;
    }
    if(count==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    return 0;
}
