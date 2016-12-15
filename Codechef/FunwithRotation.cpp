#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int N,M,i=1,d=0,point=1;
    cin>>N>>M;
    int A[N+1];
    char query;
    for(i=1;i<N+1;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<M;i++)
    {
        cin>>query;
        cin>>d;
        if(query=='R')
        {
            if(point+d>N+1)
            {
                cout<<A[point+d-N-1]<<endl;
            }
            else
            {
                cout<<A[point+d-1]<<endl;
            }
        }
        else if(query=='C')
        {
            if(point+d>N)
            {
                point = point+d-N;
            }
            else
            {
                point = point+d;
            }
        }
        else if(query=='A')
        {
            if(point-d<=0)
            {
                 point = N-(d-point);
            }
            else
            {
                point = point - d;
            }
        }
    }
    return 0;
}
