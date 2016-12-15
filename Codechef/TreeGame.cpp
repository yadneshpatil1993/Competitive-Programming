#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int B[10001]={0},n,i=0,count=0;
        cin>>n;
        if(n>1){
        for(i=0;i<n-1;i++)
        {
            int t1,t2;
            cin>>t1>>t2;
            if(B[t1]==1) B[t1]=0;
            B[t2]=1;
        }
        for(i=0;i<10001;i++)
        {
            if(B[i]==1)
            {
                count++;
            }
        }
            cout<<count+1<<endl;
        }
        else if(n==1)
        {
            cout<<1<<endl;
        }

    }
    return 0;
}
