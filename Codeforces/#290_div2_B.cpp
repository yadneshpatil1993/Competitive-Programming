#include <bits/stdc++.h>
using namespace std;

string s[50];
bool a[50][50]={0};
int m,n;
bool t1=false,t2=false,t3=false,t4=false;

bool check(int i,int j,int count1,int parent)
{
  if( a[i][j] && (count1>=4))return true;

  	a[i][j]=true;
  	count1++;
	if(i<n-1 && s[i+1][j]==s[i][j]&& parent!=3) t1=check(i+1,j,count1,1);
	if(j<m-1 && s[i][j+1]==s[i][j]&& parent!=4) t2=check(i,j+1,count1,2);
	if(i>0 && s[i-1][j]==s[i][j] && parent!=1) t3=check(i-1,j,count1,3);
	if(j>0 && s[i][j-1]==s[i][j]&& parent!=2) t4=check(i,j-1,count1,4);
	//count1--;
	if(t1||t2||t3||t4) return true;
	return false;
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
			cin>>s[i];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
				for(int l=0;l<m;l++)
					a[k][l]=0;
			if(check(i,j,0,0)){
				cout<<"Yes"<<endl;
				return 0;
			}
		}

	}

	cout<<"No"<<endl;
	return 0;
}
