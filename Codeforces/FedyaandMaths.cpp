#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long long int n;
    string s;
    cin>>s;
    n=s.length();
    int a,b,c;
    //cout<<n<<endl;
    if(n==1)
    {
          b = int(s[n-1]-48);
          if(b%4==0) cout<<4<<endl;
          else cout<<0<<endl;
    }
    if(n>1){
    a = int(s[n-2]-48);
    b = int(s[n-1]-48);
    //cout<<a<<" "<<b;
    c = a*10+b;
    if(c%4==0)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    }
    return 0;
}
