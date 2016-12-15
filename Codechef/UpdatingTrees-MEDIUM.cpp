#include <bits/stdc++.h>
using namespace std;

#define LL long long int

LL P[50002];
LL S[50002]={0};
vector<int> V[50002];


LL fsum(LL n)
{
	if(V[n].empty())
	{
		return S[n];
	}
	for(int i=0;i<V[n].size();i++)
	{
		int v = V[n][i];
        LL sum = (sum%MOD+fsum(v)%MOD)%MOD;
        return sum%MOD;
	}
}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL N,Q,M;
		cin>>N>>M>>Q;
		for(int i=1;i<=N;i++)cin>>P[i];
		for(int i=1;i<=N;i++)S[i]=0;
		for(int i=1;i<=M;i++)
		{
				string s1;
				cin>>s1;
				LL t1,t2;
				cin>>t1>>t2;
				if(s=='ADD')
				{
					S[t1]+=t2;
				}
				else
				{
					while(t1!=1)
					{
						S[t1]+=t2;
						t1=P[t1];
					}
				}
		}

		for(int i=N;i>0;i--)
		{
			V[P[i]].push_back(i);
		}

		for(int i=1;i<=Q;i++)
		{
			string s2;
			cin>>s2;
			LL t1;
			cin>>t1;
			if(s2=='VAL')
			{
				cout<<S[t1];
			}
			else
			{
				cout<<fsum(t1);
			}
			cout<<endl;
		}


	}
	return 0;
}