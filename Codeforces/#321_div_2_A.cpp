#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int l=1,g=0;
	int t1,t2;
	cin>>t1;
	for(int i=1;i<n;i++)
	{
		cin>>t2;
		if(t2>=t1)
		{
			l++;
		}
		else
		{
			g=max(l,g);
			l=1;
		}
		t1=t2;
	}
	g=max(g,l);
	cout<<g<<endl;
	return 0;  
}