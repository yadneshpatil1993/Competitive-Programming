#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int k;
        cin>>k;
        k++;
        int t=k-(k%26);
        while(t--)
        {
            cout<<(char)((t%26)+97);
        }
        k=k%26;
        while(k--)
        {
            cout<<(char)(k+97);
        }
        cout<<"\n";
    }
} 