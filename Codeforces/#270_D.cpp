#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>>n;
   long long int A[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(A[i][j]!=0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else
            {
                if(A[i][j]==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }


            if(A[i][j]!=A[j][i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                if(i>0)
                {
                    if(A[i][j]!=A[0][i]+A[0][j])
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }

            }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
