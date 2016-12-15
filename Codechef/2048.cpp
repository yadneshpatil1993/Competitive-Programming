#include<iostream>

using namespace std;

int main()
{
    int T=0;
    cin>>T;
    while(T--){
    int n=0,temp=0,i=0,count=0;
    for(i=0;i<16;i++)
    {
        cin>>temp;
        count+=temp;
    }
    count= (count/2)-2;
    cout<<count<<endl;
    }
    return 0;
}
