#include<iostream>

using namespace std;

int main()
{
    long long int n,m,temp=0,temp2=0,count=0;
    cin>>n>>m;
    count = n;
    while((count/m)!= temp)
    {
         temp=count/m;
         count+=(count/m)-temp2;
         temp2=temp;
    }
    cout<<count<<endl;
    return 0;
}
