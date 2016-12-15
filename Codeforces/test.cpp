#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream m;
    m.open ("Desktop/example.txt");
    int i=0,n=200000;
    for(i=0;i<n;i++)
    {
        m<<i;
    }
    m.close();
    return 0;
}
