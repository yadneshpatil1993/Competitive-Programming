#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main()
{
	int T,k=0;
	cin>>T;
	for(k=1;k<=T;k++)
	{
		int N,i=0;
		string s1,s2;
		map<string,int> map1;
		std::map<string,int>::iterator itr;
		map<string,string> map2;
		for(i=0;i<N;i++)
		{
			cin>>s1;
			cin>>s2;
			map1[s1]++;
			map1[s2]++;
			map2[s1]=s2;
		}
		string start[2];
		i=0;
		for(itr=map1.begin(),itr!=map1.end(),itr++)
		{
			if(itr1->second%2 != 0)
			{	
				start[i++]=itr->first;
			}
		}
		cout<<"Case #"<<k<<": ";
		if(map1[start[0]])
		{
			string t1,t2;
			t1=map1[start[0]]
			for(i=0;i<N;i++)
			{
				t2 =map1[t1];
				cout<<t1<<"-"<<t2<<" ";
				t1=t2;
			}
			cout<<endl;
		}
		else
		{
			string t1,t2;
			t1=map1[start[1]]
			for(i=0;i<N;i++)
			{
				t2 =map1[t1];
				cout<<t1<<"-"<<t2<<" ";
				t1=t2;
			}
			cout<<endl;			
		}
	}
	return 0;
}