#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i=0,temp,count=0,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            count++;
            flag=1;
            cout<<count<<endl;
            break;
        }
        else count++;
    }
    if(flag==0)cout<<n<<endl;
    return 0;
}
