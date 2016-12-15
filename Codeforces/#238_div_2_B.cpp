#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0,count=0;
    string s;
    cin>>s;
    int temp1=2,temp2=0,flag=true,dot=false;
    for(i=0;i<n;i++)
    {
        if(temp1==0)
        {
            if(s[i]=='L')
            {
                int mid=(i-temp2);
                if(mid%2==0)
                {
                    count++;
                }
                temp2=i;
                dot=true;
            }
            else if(s[i]=='R')
            {
                temp2=i;
                dot=false;
            }
            else if(dot)
            {
                count++;
            }
        }
        else if(temp1==1)
        {
            if(s[i]=='L')
            {
                int mid=(i-temp2);
                if(mid%2==0)
                {
                    count++;
                }
                temp2=i;
                dot=true;
            }
            else if(s[i]=='R')
            {
                temp2=i;
                dot=false;
            }
            else if(dot)
            {
                count++;
            }

        }

        if(s[i]=='L' && flag)
        {
            temp1=1;
            temp2=i;
            flag=false;
            dot=true;
        }
        if(s[i]=='R' && flag)
        {
            temp1=0;
            temp2=i;
            count+=i;
            flag=false;
        }
        //cout<<count<<endl;
    }
    if(temp1==2)cout<<n<<endl;
    else cout<<count<<endl;
    return 0;
}
