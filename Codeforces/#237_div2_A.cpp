#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n][n],i,j;
	char ch;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){cin>>ch;A[i][j]=(int)ch;}
	}
	int temp = A[0][0];
	int temp2 = A[0][1]; 
	bool flag1=false,flag2=false;
	if(temp==temp2)cout<<"NO\n";
	else{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || i==n-1-j)
			{
				if(A[i][j]!=temp)
				{
					cout<<"NO\n";
					return 0;	
				}
				else flag1=true;
			}
			else //if(i==0||j==0||i==n-1||j==n-1)
			{
				
				if(A[i][j]!=temp2)
				{
					cout<<"NO"<<endl;
					return 0;
				}
				else flag2=true;
			}
		}
	}
	if(flag2 && flag1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
	return 0;
}