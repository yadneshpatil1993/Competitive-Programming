#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL pow1(LL m)
{
	LL power=1;
	while(m--)
	{
		power=2*power;
	}
	return power;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	    LL l,r,count=0,countl=0;
	    int A[100]={0},B[100]={0};
	    cin>>l>>r;
        LL tempr=r;
	    while(tempr>0)
	    {
	       A[count]=tempr%2;
	       tempr=tempr/2;
	       count++;
	    }

	    while(A[count]!=1)
	    {
	    	count--;
	    }
	    LL res=0;
	    for(int i=0;i<count;i++)
	    {
	    	res+=pow1(i);
        }
	    if((res+1)*2==r+1)cout<<r<<endl;
	    else if(res<l)
	    {
	        LL temp=l;
	        while (l>0)
            {
                B[countl]=l%2;
                l=l/2;
                countl++;
            }
             while(B[countl]!=1)
            {
                countl--;
            }
            LL countl1=0,countr1=0;
            for(int j=0;j<100;j++)if(A[j]==1)countl1++;
            for(int j=0;j<100;j++)if(B[j]==1)countr1++;
            if(count==countl&&countl1==countr1)cout<<temp<<endl;
            else cout<<temp+1<<endl;
	    }
	    else cout<<res<<endl;
	}
}
