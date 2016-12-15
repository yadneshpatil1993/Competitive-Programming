#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL power(LL x, LL y)
{
    LL temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp);
    else
        return (((x*temp))*temp);
}

int main()
{
	LL A[34],i=0;
	A[0]=1;
	for(i=1;i<34;i++)
	{
		A[i]=A[i-1]*2;
	}
	bool color = true;
	LL Q;
	cin>>Q;
	while(Q--)
	{
		string s;
		LL x,y,levelx,levely;
		cin>>s;
		if(s=="Qi")
		{
			if(color)color=false;
			else color=true;
		}
		else 
		{
			scanf("%lld%lld",&x,&y);
            LL temp2;
            if(x>y){temp2=x;x=y;y=temp2;};
			for(i=0;i<34;i++)
			{
				if(A[i]>x){levelx=i;break;};
			}
			for(i=0;i<34;i++)
			{
				if(A[i]>y){levely=i;break;};
			}
			levelx--;
			levely--;
            if(x==y)
            {
            if(s=="Qr")
			{
				if(levelx%2==0&&!color)printf("1\n");
				else if(levelx%2==0&&color)printf("0\n");
				else if(levelx%2!=0&&!color)printf("0\n");
				else printf("1\n");
			}
			else
			{
				if(levelx%2==0&&!color)printf("0\n");
				else if(levelx%2==0&&color)printf("1\n");
				else if(levelx%2!=0&&!color)printf("1\n");
				else printf("0\n");	
			}
            }
            else
                {
            //cout<<levelx<<" "<<levely<<endl;
			LL levelcom = levely-levelx;
			
			levelcom = power(2,levelcom);	
			y=y/levelcom;
			LL height=0;
            LL a=0,b=0;
            a=x;
            b=y;  
            while(a!=b)
                {
                a/=2;
                b/=2;
                height++;          
            }
            height++;    
			LL diffx;
			LL samex = height+(levely-levelx)/2;
			if((levely-levelx)%2!=0) diffx = height-1+((levely-levelx)+1)/2;
			else diffx = height-1+(levely-levelx)/2;
            //cout<<samex<<" "<<diffx<<endl;
			if(s=="Qr")
			{
				if(levelx%2==0&&!color)printf("%lld\n",samex);
				else if(levelx%2==0&&color)printf("%lld\n",diffx);
				else if(levelx%2!=0&&!color)printf("%lld\n",diffx);
				else printf("%lld\n",samex);
			}
			else
			{
				if(levelx%2==0&&!color)printf("%lld\n",diffx);
				else if(levelx%2==0&&color)printf("%lld\n",samex);
				else if(levelx%2!=0&&!color)printf("%lld\n",samex);
				else printf("%lld\n",diffx);	
			}
		  }
        }
	}
	return 0;
}