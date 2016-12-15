#include<iostream>

using namespace std;

int main()
{
    long long int n,i=0,j=0;
    cin>>n;
    long long int A[n],B[n],flag=0;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(i==0) B[i]=A[i];
        else B[i]= B[i-1]+A[i];
    }
    i=1;
    long long int diff,countj=0,counti1=0,counti2=0,countn=0;
    while(j<i&&i<n-1)
    {
            diff= B[i]-B[j];
            if(diff>B[j]) j++;
            else if(diff<B[j])i++;
            else
            {
                if(diff==(B[n-1]-B[i]))
                {
                    flag=1;
                    break;
                }
            }
            if(i==j) i++;

    }
    if(flag==0) cout<<0<<endl;
    else
    {
        if(j>0)
        {
            long long int tempj=j;
            while(tempj>1)
            {
                if(A[tempj]==0)
                {
                    tempj--;
                    countj++;
                }
                else break;

            }
        }
        if(i-j>1)
        {
            long long int tempj=j+1;
            while(tempj<i-1)
            {
                if(A[tempj]==0)
                {
                    tempj++;
                    counti1++;
                }
                else break;
            }
            tempj = i;
            while(tempj>j+1)
            {
                if(A[tempj]==0)
                {
                    tempj--;
                    counti2++;
                }
                else break;
            }
        }
        if(i<n-2)
        {
            long long int tempj=i+1;
            while(tempj<n-2)
            {
                if(A[tempj]==0)
                {
                    tempj++;
                    countn++;
                }
                else break;

            }
        }
        cout<<counti1*counti2*countn<<endl;
    }

    return 0;
}
