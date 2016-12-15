#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i=0,count1=0,count2=0,temp1=0,temp2=0;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]%2==0)
        {
            count1++;
            temp1=i;
        }
        else
        {
            count2++;
            temp2=i;
        }
    }
    if(count1>count2) cout<<temp2+1<<endl;
    else cout<<temp1+1<<endl;
    return 0;
}
