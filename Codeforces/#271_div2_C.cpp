#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct temp
{
    ll a, b;
};
bool is_square(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3,ll x4,ll y4)
{

   ll  d1=(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
   ll  d2=(y2-y3)*(y2-y3)+(x2-x3)*(x2-x3);
   ll  d3=(y4-y3)*(y4-y3)+(x4-x3)*(x4-x3);
   ll  d4=(y4-y1)*(y4-y1)+(x4-x1)*(x4-x1);
   ll d5=(y4-y2)*(y4-y2)+(x4-x2)*(x4-x2);
   ll  d6=(y1-y3)*(y1-y3)+(x1-x3)*(x1-x3);
   if((d1==d2)&&(d2==d3)&&(d3==d4)&&(d4==d1)&&(d5==d6)||(d5==d2)&&(d2==d6)&&(d6==d4)&&(d4==d5)&&(d1==d3)||(d1==d5)&&(d5==d3)&&(d3==d6)&&(d6==d1)&&(d2==d4))return true;
    return false;
}
temp rotate(temp x,temp y,ll n)
{
    ll u=x.a-y.a;
    ll v=x.b-y.b;
    ll cos,sin;
    if(n==0){cos=1;sin=0;}
    if(n==1){cos=0;sin=1;}
    if(n==2){cos=-1;sin=0;}
    if(n==3){cos=0;sin=-1;}
    ll u1=u*cos-v*sin;
    ll u2=u*sin+v*cos;
    u1+=y.a;
    u2+=y.b;
    x.a=u1;
    x.b=u2;
    return x;
}
int main()
{
    ll n;
    cin>>n;
    ll at[n];
    for(ll i=0;i<n;i++)
    {
    at[i]=-1;
     temp x[4],a[4];
      for(ll j=0;j<4;j++)
      {
          cin>>x[j].a>>x[j].b>>a[j].a>>a[j].b;
      }
      ll moves=17;
      bool result=false;
       for(ll f=0;f<4;f++)
          {
              for(ll g=0;g<4;g++)
              {
                  for(ll h=0;h<4;h++)
                  {
                      for(ll d=0;d<4;d++)
                      {
                            temp a1=rotate(x[0],a[0],f);
                            temp a2=rotate(x[1],a[1],g);
                            temp a3=rotate(x[2],a[2],h);
                            temp a4=rotate(x[3],a[3],d);
                            if(is_square(a1.a,a1.b,a2.a,a2.b,a3.a,a3.b,a4.a,a4.b))
                            {
                                   ll area=(a1.a-a2.a)*(a1.a-a2.a)+(a1.b-a2.b)*(a1.b-a2.b);
                                   if(area>0)
                                   {
                                            result=true;
                                            if(f+g+h+d<moves)
                                            {
                                                moves=f+g+h+d;
                                                at[i]=moves;
                                            }
                                   }
                            }
                      }
                  }
              }
          }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<at[i]<<"\n";
    }
}