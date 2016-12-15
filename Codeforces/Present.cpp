#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,m,w,min_height=0,temp=0;
    cin>>n>>m>>w;
    long long int A[n],i=0;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    min_height = A[0];
    int k=w,count=0;
    for(i=0;i<m;i++)
    {
        if(A[k]>min_height)
        {
            min_height++;
        }
        else if(A[k]==min_height)
        {
            temp=k;
            while(A[j]==min_height)
            {
                count++;
                j++;
            }
            k = k+count-
        }
    }
    return 0;
}
