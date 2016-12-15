#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL A[502][502];
//LL Totalcost [502];
float D[502];
LL C[502];

	
LL costcounter(LL k,LL N)
{
	LL Hash [502]={0};
	std::stack<int> mystack;
	LL Big=0;
	for (int i=0; i<N; i++) 
			{
				if(A[k][i]==1&&Hash[i]==0)
					{
						Hash[i]=1;
						mystack.push(i);
						Big +=C[i];
					}
			}
			//cout<<"Big "<<Big<<endl;
	while (!mystack.empty())
	{
			LL temp1 =  mystack.top();
			mystack.pop();
     		for (int i=0; i<N; i++) 
			{
				if(A[temp1][i]==1&&Hash[i]==0)
					{
						Hash[i]=1;
						mystack.push(i);
						Big +=C[i]; 
					}
			}
  	}

  	return Big;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL cor[502][2];
		LL N,i=0,j=0;
		for(i=0;i<502;i++)for(j=0;j<502;j++)A[i][j]=0;
		//for(i=0;i<502;i++)Hash[i]=0;

		scanf("%lld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld%lld",&cor[i][0],&cor[i][1]);
			scanf("%f",&D[i]);
			scanf("%lld",&C[i]);
		}

		for (i = 0; i < N; i++)
		{
			for ( j = 0; j < N ; j++)
			{
				if(i==j) A[i][j]=1;
				else
				{
					float dist = sqrt(((cor[i][0]-cor[j][0])*(cor[i][0]-cor[j][0]))+((cor[i][1]-cor[j][1])*(cor[i][1]-cor[j][1])));
					if(dist<=D[i]) A[i][j]=1;
					//if(dist<=D[j]) A[][]=1;
				}
			}
		}

		

		LL mini=costcounter(0,N);
		for(i=1;i<N;i++)
		{
			mini= max(mini,costcounter(i,N));
		}
		 cout<<mini<<endl;
	}
	return 0;
}
