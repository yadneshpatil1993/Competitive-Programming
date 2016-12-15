#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,k,round=0,remain=0;
        cin>>N>>k;
        long long int A[k+1],temp=0,i=0,lastr=0,count=0;
        temp=N;

        while(temp>0)
        {
            lastr = temp;
            temp -= ((k+1)*k)/2 + i*k*k;
            i++;
            round++;
        }
        int temp2= round;
        int shelf=0,j=1;

        while(lastr>0)
        {
            lastr -= (round-1)*k+j;
            j++;
        }
        for(i=1;i<j;i++)
        {
            count = k*(round-1)*round*round*i/2;
            cout<<count<<" ";
        }
        for(i=j;j<k+1;i++)
        {
            count = k*(round-2)*(round-1)*(round-1)*i/2;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
