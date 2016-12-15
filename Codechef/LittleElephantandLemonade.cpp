#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i=0,n,m,Room[101]={0},drink=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            Room[temp]++;
        }
        for(i=0;i<n;i++)
        {
            int c=0;
            scanf("%d",&c);
            int bottol[c];
            for(int j=0;j<c;j++)
            {
                scanf("%d",&bottol[j]);
            }
            if(Room[i]!=0 && c>Room[i])
            {
                sort(bottol,bottol+c);
                for(int s=c-1;s>=c-Room[i];s--)
                {
                    drink += bottol[s];
                }
            }
            else if(Room[i]!=0)
            {
                for(int s=0;s<c;s++)
                {
                    drink += bottol[s];
                }
            }
        }
        cout<<drink<<endl;
    }

    return 0;
}
