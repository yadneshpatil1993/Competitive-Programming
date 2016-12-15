#include<iostream>

using namespace std;

int main()
{
    int a,b,m,n,count=0;
    cin>>n>>m>>a>>b;

    if(a*m>=b)
    {
        count= (n/m)*b;
        count+= (n%m)*a;
        int count2 = ((n/m)+1)*b;
        if(count<=count2)
        cout<<count<<endl;
        else
        cout<<count2<<endl;
    }
    else
    {
        cout<<a*n<<endl;
    }
    return 0;
}
