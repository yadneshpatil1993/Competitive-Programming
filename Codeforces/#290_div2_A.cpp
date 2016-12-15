#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>n>>m;
	bool f=true;
	for(int i=1;i<=n;i++)
	{
	    
			if(i%2!=0)
			{
				for(int j=1;j<=m;j++)cout<<"#";
			}
			else
			{
				if(f){
					for(int j=1;j<=m-1;j++)cout<<".";
					cout<<"#";
					f=false;
				}
				else if(!f){
					cout<<"#";
					for(int j=1;j<=m-1;j++)cout<<".";
					f=true;
				}
			}
		cout<<endl;
	}
	return 0;
}
