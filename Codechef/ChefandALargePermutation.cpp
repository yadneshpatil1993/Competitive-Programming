#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL N,K,count=0,tmp=0;
		cin>>N>>K;
		LL A[K];
		for(int i=0;i<K;i++)cin>>A[i];
		sort(A,A+K);
		bool flag= true;
		for(int i=0;i<K;i++)	
		{
			if(A[i]==1){printf("Chef\n");flag=false;break;}
			else if(A[i]==2){printf("Mom\n");flag=false;break;}
			else
			{
				count += ((A[i]-1)*(A[i])/2 - tmp*(tmp+1)/2);
				if(A[i]>count)
				{
					if(A[i]%2!=0)cout<<"Chef\n";
					else cout<<"Mom\n";
					flag=false;
					break;
				}
				else
				{
					tmp=A[i];
				}
			}
			//cout<<count<<endl;
		}
		if(flag)
		{

			count += (N*(N+1)/2 - tmp*(tmp+1)/2);
			count++;	
			//cout<<count<<endl;
			if(count%2==0)printf("Mom\n");
			else printf("Chef\n");
		} 
	}
	return 0;
}