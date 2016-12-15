#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int i,n,d,count=0,temp=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        count+=temp;
    }
    if(count+10*(n-1)>d) printf("-1\n");
    else
    {
        printf("%d\n",2*(n-1)+(d-(count+10*(n-1)))/5);
    }
    return 0;
}
