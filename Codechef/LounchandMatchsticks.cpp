#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int A[100002],i=0;
    A[0]=0;
    for(i=1;i<100001;i++)
    {
        A[i] = i*i;
    }
    int T;
    cin>>T;
    while(T--)
    {
        long long int temp=0;
        int n;
        cin>>n;
        int flag=0;
        for(i=1;i<n;i++)
        {
            temp = A[n]-A[i];
            //cout<<temp<<endl;
            double sqtemp = sqrt(temp);
            //cout<<sqtemp<<endl;
            if(sqtemp == (int)sqtemp)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}
