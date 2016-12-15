#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long int

struct mainarr
{
    int data1,index;
};
struct Arr
{
    int data1;
    int sett;
    bool visit;
};

mainarr Sort[100005];
Arr AA[100005];

bool compair(mainarr a,mainarr b) {return a.data1<b.data1;}
int BST(int l,int r,int data1 ,mainarr Sort[])
{
    int mid;
    mid=(l+r)/2;
    if(l>r) return 0;
    if(l==r and Sort[l].data1!=data1) return 0;
    if(l==r and Sort[l].data1==data1) return Sort[l].index;
    else
    {
        if(data1<=Sort[mid].data1) return BST(l,mid,data1,Sort);
        else return BST(mid+1,r,data1,Sort);
    }
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>AA[i].data1;
        Sort[i].index=i;
        Sort[i].data1=AA[i].data1;
        AA[i].sett=2;
        AA[i].visit=1;
    }
    sort(Sort+1,Sort+n+1,compair);
    for(int i=1;i<=n;i++)
    {
        int a1=a-AA[i].data1;
        if(a1>=1 and AA[i].visit)
        {
            int ind=BST(1,n,a1,Sort);
            if(ind!=0 and AA[ind].visit)
            {
                AA[i].sett=0;
                AA[ind].sett=0;
                AA[i].visit=0;
                AA[ind].visit=0;
            }
        }
        if(AA[i].visit)
        {
            int b1=b-AA[i].data1;
            if(b1>=1 and AA[i].visit)
            {
                int ind=BST(1,n,b1,Sort);
                if(ind!=0 and AA[ind].visit)
                {
                    AA[i].sett=1;
                    AA[ind].sett=1;
                    AA[i].visit=0;
                    AA[ind].visit=0;
                }
            }
        }
    }
    bool temp1=true;
    for(int i=1;i<=n;i++)
    {
        if(AA[i].sett==2) temp1=false;
    }
    if(temp1)
    {
        cout<<"YES\n";
        for(int i=1;i<=n;i++) cout<<AA[i].sett<<" ";
    }
    else cout<<"NO\n";

}
