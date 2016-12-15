#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=0,c=0,d=0,e=0,A[101]={0},B[101]={0},C[101]={0},D[101]={0},E[101]={0};
	for(int i=0;i<n;i++)
	{
		int temp;
		char ch;
		cin>>ch;
		if(ch=='A')
		{
			cin>>temp;
			A[temp]++;
			a++;
		}
		if(ch=='B')
		{
			cin>>temp;
			B[temp]++;
			b++;
		}
		if(ch=='C')
		{
			cin>>temp;
			C[temp]++;
			c++;
		}
		if(ch=='D')
		{
			cin>>temp;
			D[temp]++;
			d++;
		}
		if(ch=='E')
		{
			cin>>temp;
			E[temp]++;
			e++;
		}
					
	}
	if(a==0)
	{
		cout<<"Nothing Unusual\n";
	}
	else
	{
		int temp2=(int)a/10+1;
		bool flag=false;
		for(int i=0;i<=100;i++)
		{
			if(A[i]>=temp2){cout<<i<<" ";flag=true;}
		}
		if(!flag)cout<<"Nothing Unusual";
		cout<<endl;
	}
	if(b==0)
	{
		cout<<"Nothing Unusual\n";
	}
	else
	{
		int temp2=b/10+1;
		bool flag=false;
		
		for(int i=0;i<=100;i++)
		{
			if(B[i]>=temp2){cout<<i<<" ";flag=true;}
		}
		if(!flag)cout<<"Nothing Unusual";
		cout<<endl;
	}
	if(c==0)
	{
		cout<<"Nothing Unusual\n";
	}
	else
	{
		bool flag=false;
		int temp2=c/10+1;
		for(int i=0;i<=100;i++)
		{
			if(C[i]>=temp2){cout<<i<<" ";flag=true;}

		}
		if(!flag)cout<<"Nothing Unusual";
		cout<<endl;
	}
	if(d==0)
	{
		cout<<"Nothing Unusual\n";
	}
	else
	{
		bool flag=false;
		int temp2=d/10+1;
		for(int i=0;i<=100;i++)
		{
			if(D[i]>=temp2){cout<<i<<" ";flag=true;}

		}
		if(!flag)cout<<"Nothing Unusual";
		cout<<endl;
	}
	if(e==0)
	{
		cout<<"Nothing Unusual\n";
	}
	else
	{
		bool flag=false;
		int temp2=e/10+1;
		for(int i=0;i<=100;i++)
		{
			if(E[i]>=temp2){cout<<i<<" ";flag=true;}

		}
		if(!flag)cout<<"Nothing Unusual";
		
		cout<<endl;
	}

	return 0;
}