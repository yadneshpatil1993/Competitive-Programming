#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int i=1,n=12,temp=1;
    for(i=1;i<n+1;i++)
    {
        temp=temp*i;
        cout<<temp<<endl;
    }

    return 0;
}
