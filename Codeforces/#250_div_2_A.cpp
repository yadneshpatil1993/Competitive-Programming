#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string A,B,C,D;
    cin>>A>>B>>C>>D;
    int size[4],match[4],i=0;
    size[0] = A.length()-2;
    size[1] = B.length()-2;
    size[2] = C.length()-2;
    size[3] = D.length()-2;
    for(i=0;i<4;i++) match[i] = size[i];
    sort(size,size+4);
    bool flag1= false,flag2 = false;
    if(2*size[0]<=size[1])flag1=true;
    if(2*size[2]<=size[3])flag2=true;

    if(flag1 && flag2) cout<<"C"<<endl;
    else if(flag1)
    {
        for(i=0;i<4;i++)
        {
            if(size[0]== match[i])cout<<(char)(65+i)<<endl;
        }
    }
    else if(flag2)
    {
        for(i=0;i<4;i++)
        {
            if(size[3]== match[i])cout<<(char)(65+i)<<endl;
        }
    }
    else cout<<"C"<<endl;
    return 0;
}
