#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    while(T--)
        {
        long long int x,y,x1,x2,y1,y2,A[4];
        cin>>x>>y>>x1>>y1>>x2>>y2;
        A[0]=abs(x-x1);
        A[1]=abs(x-x2);
        A[2]=abs(y-y1);
        A[3]=abs(y-y2);
        sort(A,A+4);
        cout<<A[0]<<endl;
    }
    return 0;
}
