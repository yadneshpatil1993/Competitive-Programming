#include<iostream>

using namespace std;

int main()
{
    int i=0,n,s,flag=0;
    cin>>n>>s;
    int temp1=0,temp2=0,mintemp=100;
    for (i=0;i<n;i++)
    {
        cin>>temp1>>temp2;
        if(temp1<s)
        {
            flag=1;
            if(temp2>0 && temp2<mintemp)
            {
                mintemp =temp2;
            }
        }
    }
    if(mintemp == 100 && flag==0)
    {
        cout<<-1<<endl;
    }
    else if(mintemp==100 && flag==1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<100-mintemp<<endl;
    }
    return 0;
}
