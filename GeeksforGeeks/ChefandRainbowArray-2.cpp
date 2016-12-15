#include<iostream>

using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
    if(a%b==0) return b;
    else gcd(b,a%b);
}
#define mod 1000000007
int main()
{
    ll N;
    cin>>N;
    ll p,p1,p2,p3,p4,p5,total ;
    p=(N-1)/2;
    p1=p-1;
    p2=p1-1;
    p3=p2-1;
    p4=p3-1;
    p5=p4-1;
    ll q=720;
    ll gc = gcd(p,q);
    p/=gc;
    q/=gc;
    if(q>1)
    {
        gc = gcd(p1,q);
    (p1)/=gc;
     q/=gc;
    }
    if(q>1)
    {
     gc = gcd(p2,q);
     (p2)/=gc;
     q/=gc;
     }
    if(q>1)
    {
        gc = gcd(p3,q);
        (p3)/=gc;
    q/=gc;
    }
    if(q>1)
    {
        gc = gcd(p4,q);
        (p4)/=gc;
    q/=gc;
    }
    if(q>1)
    {
        gc = gcd(p5,q);
        (p5)/=gc;
    q/=gc;
    }
    ll nk = (p*(p1)) % mod;
     nk= (nk*(p2)) % mod;
     nk= (nk*(p3)) % mod;
     nk= (nk*(p4)) % mod;
     nk= (nk*(p5)) % mod;
     cout<<nk<<endl;


    return 0;
}
