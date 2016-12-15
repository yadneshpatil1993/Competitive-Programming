#include<iostream>

using namespace std;

int  main()
{
    int n,i=0,temp1,temp2,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp1>>temp2;
        if(temp2-temp1>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}
