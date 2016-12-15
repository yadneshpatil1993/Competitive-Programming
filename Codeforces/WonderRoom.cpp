#include<iostream>

using namespace std;

int main()
{
    long long int p,a,b,n,i;
    cin>>n>>a>>b;
    p=6*n;
    if(p<=a*b)
    {
        cout<<a*b<<endl;
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        while(p>a*b)
        {
            if((a+1)*b <= a*(b+1)) a++;
            else b++;
        }
        cout<<a*b<<endl;
        cout<<a<<" "<<b<<endl;

    }
    return 0;
}
