#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    long long int n=100,A[101],i=0;
    /*for(i=1;i<=n;i++)
    {
        long long int j=1,count=0;
        bool flag = true;
        while(flag)
        {
            count=0;
            int temp=i*j;
            for(int k=1;k<i;k++)
            {
                if(temp%k==0)count++;
                else
                {
                    j++;
                    break;
                }
                //cout<<count<<endl;
            }
            if(count==i-1)
            {
                A[i]=temp;
                flag=false;
            }
        }
    }*/
    for(i=1;i<=n;i++) cout<<i*i*i*i<<endl;
    return 0;
}
