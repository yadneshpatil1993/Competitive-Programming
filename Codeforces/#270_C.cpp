#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int A[n];
    string s[n+1][2],temp1,temp2,store;
    for(i=1;i<=n;i++)
    {
        cin>>s[i][0]>>s[i][1];
    }
    for(i=0;i<n;i++)cin>>A[i];

    temp1 = s[A[0]][1];
    temp2 = s[A[0]][0];
    if(temp1>temp2)store=temp2;
    else store=temp1;

    for(i=1;i<n;i++)
    {
        //temp3=temp1;
        //temp4=temp2;
        temp1 = s[A[i]][1];
        temp2 = s[A[i]][0];
        if(temp1>temp2)
        {
            if(store<temp2) store=temp2;
            else if(store<temp1) store=temp1;
            else
            {
              cout<<"NO"<<endl;
              return 0;
            }
        }
        else if(temp2>temp1)
        {
            if(store<temp1) store=temp1;
            else if(store<temp2) store=temp2;
            else
            {
              cout<<"NO"<<endl;
              return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
