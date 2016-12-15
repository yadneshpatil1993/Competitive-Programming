#include <bits/stdc++.h>

using namespace std;
int main()
{

    char  *p1 ="name";
    char *p2;
    p2 = (char*)malloc(20);
    memset(p2,0,20);
    while(*p2++=*p1++);
    printf("%sn",p2);
    //printf("%d",printf("%d",printf("%d",printf("%s","ILOVECPROGRAM"))));
    return 0;
}
