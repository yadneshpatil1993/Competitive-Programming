#include<iostream>

using namespace std;

int main()
{
    int T=0;
    cin>>T;
    while(T--)
    {
        int n=0,k=0,count1=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp%2==0)
            {
                count1++;
            }
        }
        if (k==0)
        {
            if(count1==n) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else if(count1>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
