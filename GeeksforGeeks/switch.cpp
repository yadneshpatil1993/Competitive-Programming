#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        long long int p=0,i;
        bool switch1=true;
        long long int count=1;
        p=s.length();
        for(i=0;i<p;i++)
        {
            if(!switch1)
            {
                 if(s[i]=='l')
                 {
                      count= (count*2-1)%1000000007;
                 }
                 else
                 {
                      count= (count*2+1)%1000000007;
                 }
                 switch1=true;
                 continue;
            }
            else
            {
                if(s[i]=='l')
                 {
                      count= (count*2)%1000000007;
                 }
                 else
                 {
                      count= (count*2+2)%1000000007;
                 }
                 switch1=false;
                 continue;
            }
            //count = count%1000000007;
        }
        cout<<count<<"\n";
    }
    return 0;
}
