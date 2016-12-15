#include  <bits/stdc++.h>
using namespace std;

struct small
{
    bool operator() (int x,int y)
    {
        return y<x;
    }
};

int main()
{
	int T; 
	cin>>T;

	while(T--)
	{
		int m,n;
		cin>>m>>n;
		priority_queue<int, vector<int>, small > pq; /// increasing order
   		long long int gcount=0;
   		for(int i=0;i<m;i++)
   		{
   			int a;
   			cin>>a;
   			pq.push(a);
   		}
   		// while(!pq.empty())
   		// {
   		// 	cout<<pq.top()<<" ";
   		// 	pq.pop();
   		// }
   		while(pq.size()!=1)
   		{
   			int t=n;
   			long long int count=0;
   			while((!pq.empty())&&t>=1)
   			{
   				t--;
   				count+=pq.top();
   				pq.pop();
   			}
   			gcount+=count;
   				
//   			cout<<count<<" ";
   			pq.push(count);

   		}
   		cout<<gcount<<endl;
	}
	return 0;
}