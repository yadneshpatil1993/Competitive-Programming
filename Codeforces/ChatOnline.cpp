#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int p,q,l,r,i=0,A[1001]={0},B[1001]={0};
    cin>>p>>q>>l>>r;
    for(i=0;i<p;i++)
    {
        int temp1,temp2;
        scanf("%d%d",&temp1,&temp2);
        int j=temp1;
        while(j<=temp2) {A[j]=1;j++;}
    }
    for(i=0;i<q;i++)
    {
        int temp1,temp2;
        scanf("%d%d",&temp1,&temp2);
        int j=temp1;
        while(j<=temp2) {B[j]=1;j++;}
    }
    i=l;
    int flag=0,count=0;
    while(i<=r)
    {
        flag=0;
        for(int k=0;k<1001;k++)
        {
            if(k+i<=1000 && B[k]==1 && A[k+i]==1)
            {
              flag=1;
              break;
            }
        }
        //cout<<count<<endl;
        if (flag==1) count++;
        i++;
    }
    cout<<count<<endl;
    return 0;
}
