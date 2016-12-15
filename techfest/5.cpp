#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int devisor(int t)
{
    int i=0,sum=0;
    for(i=1;i<=sqrt(t);i++)
    {
        if(t%i==0)
        {

            if(t==i*i) sum+=i;
            else sum+=i+t/i;
        }
    }
    return sum;
}

int main()
{
    int A[10]={2,3,5,7,11,13,17,19,23,29};
    int i=0,j=0,count=0;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            int temp1 = A[i]*A[i]*A[i]*A[j];
            int temp2 = A[j]*A[j]*A[j]*A[i];

            cout<<"p3q "<<temp1<<" "<<temp2<<endl;
            temp1 = devisor(temp1);
            temp2 = devisor(temp2);
            cout<<temp1<<" "<<temp2<<endl;
            if(temp1%24!=0)
            {
                count++;
                cout<<temp1<<endl;
            }
            else if(temp2%24!=0)
            {
              count++;
              cout<<temp2<<endl;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
