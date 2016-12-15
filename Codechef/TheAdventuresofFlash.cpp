#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,i=0,count=0,temp;
        float H,D,S,temp2;
        cin>>H>>D>>S;
        cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>temp;
            count+=temp;
        }
        temp2=(D/S)+count;
        float temp3;
        temp3= sqrt(H)/4;
        if(temp3>=temp2) cout<<"Y"<<endl;
        else cout<<"N"<<endl;


    }
    return 0;
}
