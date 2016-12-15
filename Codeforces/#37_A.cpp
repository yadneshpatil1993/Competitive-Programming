#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[1001]={0};
	int N;
	cin>>N;
	int tmp;
	for(int i=0;i<N;i++)
	{
		cin>>tmp;
		A[tmp]++;
	}
	int count=0;
	int height=0;
	for(int i=0;i<=1000;i++)
	{
		if(A[i]>0)count++;
		height=max(height,A[i]);
	}
	cout<<height<<" "<<count<<endl;
	return 0;
}