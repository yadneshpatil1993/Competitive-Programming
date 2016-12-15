#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,i=0,j=0,count=0,flag=0;
    cin>>n;
    int A[n][n];
    char a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a;
            if(a=='x')
            {
                A[i][j]=1;
            }
            else if(a=='o')
            {
                A[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            count = 0;
            if(i>0 && A[i-1][j]==0) count++;
            if(j>0 && A[i][j-1]==0)count++;
            if(i<n-1 && A[i+1][j]==0)count++;
            if(j<n-1 && A[i][j+1]==0)count++;
            //cout<<count<<endl;
            if(count%2!=0)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    if(flag==0)
    cout<<"YES"<<endl;

    return 0;
}
