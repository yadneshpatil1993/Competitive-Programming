#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        float b,ls,rs1,rs2;
        scanf("%f%f",&b,&ls);
        rs1 = sqrt(ls*ls-b*b);
        printf("%.6f ",rs1);
        rs2 = sqrt(b*b+ls*ls);
        printf("%.6f\n",rs2);
    }
    return 0;
}
