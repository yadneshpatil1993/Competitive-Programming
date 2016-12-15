#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double x,k,temp=1;
        scanf("%lf%lf",&x,&k);
        while(temp<=k)temp*=2;
        double a = (long long int)(temp/2)-1;
        temp = ((k-a)*2-1)*x/temp;
        printf("\n%.8f",temp);
    }
    return 0;
}