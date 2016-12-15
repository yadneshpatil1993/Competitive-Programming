#include<iostream>

using namespace std;

int main()
{
    int i=0,n,flag=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"Happy Alex"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Poor Alex"<<endl;
    return 0;
}
