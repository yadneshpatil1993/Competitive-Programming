#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define Fill(s,v) memset(s,v,sizeof(s))
#define pb push_back
struct mail
{
    int a,b;
};
bool compair1(mail a,mail b)
{
    return a.a<b.a;
}
bool compair2(mail a,mail b)
{
    return a.b<b.b;
}
int BinarySearch1(mail A[],int l,int r,int key)
{
    if(l==r and A[l].a==key) return l;
    if(l==r) return 0;
    int mid=(l+r)/2;
    if(key<A[mid+1].a) return BinarySearch1(A,l,mid,key);
    else return BinarySearch1(A,mid+1,r,key);
}
int BinarySearch2(mail A[],int l,int r,int key)
{
    if(l==r and A[l].b==key) return l;
    if(l==r) return 0;
    int mid=(l+r)/2;
    if(A[mid].b>= key) return BinarySearch2(A,l,mid,key);
    else return BinarySearch2(A,mid+1,r,key);
}
int main()
{
    int n;
    cin>>n;
    mail A[n+1],B[n+1],C[n+1];
    map <int ,int >M;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i].a>>A[i].b;
        M[A[i].a]++;
        M[A[i].b]++;
        B[i].a=A[i].a;
        B[i].b=A[i].b;
        C[i].a=A[i].a;
        C[i].b=A[i].b;
    }
    sort(B+1,B+n+1,compair1);
    sort(C+1,C+n+1,compair2);
    map<int,int> :: iterator it;
    vector<int> V;
    for(it=M.begin();it!=M.end();it++) if(it->second==1) V.push_back(it->first);
    int start=V[0],endi=V[1];
    V.clear();
    int Key=start;
    V.push_back(Key);
    for(int i=1;i<=n;i++)
    {

        int ind1=BinarySearch1(B,1,n,Key);
        int ind2=BinarySearch2(C,1,n,Key);
        if(M[Key]==2)
        {
            int i1=0,i2=0,i3=0;
            bool g=true,h=true,k=true;

            if(ind1!=0)
            {
                i1=ind1;
                h=false;
                i2=ind1-1;
                i3=ind1+1;
                if(i2>0 and B[i2].a==Key)
                {
                    ind2=i2;
                    g=false;
                }
                else if(i3<=n and B[i3].a==Key)
                {
                    ind2=i3;
                    g=false;
                }

            }
            if(g)
            {
                if(i1==0)
                {
                    i1=ind2;
                    i2=ind2-1;
                    i3=ind2+1;
                    if(i2>0 and C[i2].b==Key)
                    {
                        ind1=i1;
                        ind2=i2;
                    }
                    else if(i3<=n and C[i3].b==Key)
                    {
                        ind1=i1;
                        ind2=i3;
                    }
                }
            }
            if(!h and !g)
            {
                if(B[ind1].b!=V[V.size()-2])
                {
                    Key=B[ind1].b;
                    V.push_back(Key);
                }
                else
                {
                    Key=B[ind2].b;
                    V.push_back(Key);
                }

            }
            else if(!h and g)
            {
                if(B[ind1].b!=V[V.size()-2])
                {
                    Key=B[ind1].b;
                    V.push_back(Key);
                }
                else
                {
                    Key=C[ind2].a;
                    V.push_back(Key);
                }
            }
            else if(h and g)
            {
                if(C[ind1].a!=V[V.size()-2])
                {
                    Key=C[ind1].a;
                    V.push_back(Key);
                }
                else
                {
                    Key=C[ind2].a;
                    V.push_back(Key);
                }
            }
        }
        else
        {
            if(ind1!=0)
            {
                Key=B[ind1].b;
                V.push_back(Key);
            }
            else if(ind2!=0)
            {
                Key=C[ind2].a;
                V.push_back(Key);
            }
        }
    }
     for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
     cout<<endl;

}