#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        x3=x1+(y1-y2);
        y3=y1;
        y4=y2;
        x4=x3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(y1==y2)
    {
        y3=y1+(x1-x2);
        x3=x1;
        x4=x2;
        y4=y3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(abs(y1-y2)==abs(x1-x2))
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
