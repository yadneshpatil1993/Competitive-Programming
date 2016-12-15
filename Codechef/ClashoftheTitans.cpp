#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[100002]={0};
		int a=0,count=0;
		while(N--){
		scanf("%d",&a);
		A[abs(a)]++;
		if(A[abs(a)]==2)
		{
			A[abs(a)]=0;
			count++;
		}
	}
	printf("%d",count);
	}
	return 0;
}
