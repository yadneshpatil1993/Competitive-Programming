#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int p=0,countl=0,countr=0;
    string s;
    cin>>s;
    p=s.length();
    int arr[p];
    int i=0;
    countr = p-1;
    for(i=1;i<p+1;i++)
    {
        if(s[i-1]=='l')
        {
            arr[countr]=i;
            countr--;
        }
        else if(s[i-1]=='r')
        {
            arr[countl]=i;
            countl++;
        }
    }
    for(i=0;i<p;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
