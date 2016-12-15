#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int x,y;
        cin>>x>>y;
        if(x>=0&&y>=0)
        {
            if(x==0&&y%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(x%2==0)
            {
                if(y%2==0 && y>=x+2)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(y<=x+1 || y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        if(x<0&&y>=0)
        {
            if(x%2==0)
            {
                if(y<=-x || y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(y>=-x+1 && y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        if(x<0&&y<0)
        {
            if(x%2==0)
            {
                if(y>=x || y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(y<=x-1 && y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        if(x>=0 && y<0)
        {
            if(x==0&&y%2==0)cout<<"YES"<<endl;
            else if(x%2==0)
            {
                if(y<=-x&&y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(y>=-x+1 || y%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
