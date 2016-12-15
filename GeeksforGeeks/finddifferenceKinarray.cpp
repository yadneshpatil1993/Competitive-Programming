#include<iostream>

using namespace std;

int main()
{
    int n,i=0,k=0,flag=0;
    cin>>n>>k;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int temp1=0,temp2=1;
    while(temp1<n-1 && temp2<n)
    {
        int diff=0;
        diff = A[temp2]-A[temp1];
        if(diff == k)
        {
            cout<<A[temp1]<<" "<<A[temp2]<<endl;
            flag=1;
            break ;
        }
        else if(diff>k)
        {
            temp1++;
            if(temp1==temp2) temp2++;
        }
        else if(diff<k)
        {
            temp2++;
        }
    }
    if(flag==0)
        cout<<"No element"<<endl;
    return 0;
}
