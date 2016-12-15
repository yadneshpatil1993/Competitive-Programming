#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL GCD(LL a, LL b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}
LL nCr(LL n, LL r)
{
    LL ans=1;
    for(LL i=1;i<=r;i++)
    {
        LL d=GCD(ans,i);
        ans/=d;
        ans=ans*((n-i+1)/(i/d));
        ans= ans;
    }
    return ans;
}

int main()
{
	int count1=0,count2=0,p1,p2,x=0,i;
	string s1,s2;
	cin>>s1>>s2;
	p1=s1.length();
	p2=s2.length();
	for(i=0;i<p1;i++)
	{
		if(s1[i]=='+')count1++;
		else count1--;
	}

	for(i=0;i<p2;i++)
	{
		if(s2[i]=='+')count2++;
		else if(s2[i]=='-')count2--;
		else x++;
	}
		int temp=-x,temp3=x;
		int j=0;
		int no = count1-count2;
		int a = (no+x)/2;
		float power=1;
		for(i=0;i<x;i++)power=power*2;
        while(temp3>=temp)
		{
			if(temp3+count2==count1){j=1;break;}
			temp3-=2;
		}

		if(j==0)cout<<0.000000000<<endl;
		else
		{
		    //cout<<x<<" "<<a<<endl;
		    float total = nCr(x,a);
		    //cout<<total<<" "<<power<<endl;
            float prob;
            prob = (float)(total/power);
            printf("%.9f\n",prob);
		}
	return 0;
}
