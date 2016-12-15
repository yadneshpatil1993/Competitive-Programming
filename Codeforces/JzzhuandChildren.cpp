#include<iostream>
using namespace std;

#define ll long long int;

int main()
{
    int n,m,temp=0,input,i=0,result=0;
    cin>>n>>m;
    for(i=1;i<n+1;i++)
    {
        cin>>input;
        int p=0;
        if( m <=input && input%m==0) p = (input/m)-1;
        else p = (input/m) ;
        //cout<<p<<endl;
        if( p >= temp)
        {
            temp = p;
            result = i;
            //cout<<i<<" "<<temp<<endl;
        }
    }
    cout<<result<<endl;
    return 0;
}
