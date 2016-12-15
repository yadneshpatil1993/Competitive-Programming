#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i=0,j=0,B[n],count=0,mintime=99999,mingate=0;
    char c;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<A[i];j++)
        {
            cin>>c;
            if(c=='S') count=count+1;
            else if(c=='C') count=count+2;
            else if(c=='B') count=count+3;
            else if(c=='T') count=count+4;
        }
        if(mintime>count)
        {
          mintime=count;
          mingate=i+1;
        }
    }
    cout<<mingate<<endl;
}
