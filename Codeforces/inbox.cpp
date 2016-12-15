#include<iostream>

using namespace std;

int main()
{
    int n,i=0,flag=0,oper=0,flag2=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]==1)
        {
            oper++;
            flag=1;
        }
        else if(A[i]==0 && flag==1)
        {
            oper++;
            flag=0;
        }
    }
    if(A[n-1]==0)
    {
        if(oper>0)cout<<oper-1<<endl;
        else cout<<0<<endl;
    }
    else
    cout<<oper<<endl;


    return 0;
}
