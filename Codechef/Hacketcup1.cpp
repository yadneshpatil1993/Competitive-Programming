#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int j=1;j<=T;j++)
	{
		int N,i=0,mini=11,maxi=0,minii=-1,maxii=10;
		int A[9]={0};
		cin>>N;
		cout<<"Case #"<<j<<": ";
		
		if(N==0)cout<<0<<" "<<0;
		else{
		
		while(N!=0)
		{
			A[i]=N%10;
			if(A[i]<mini&&A[i]!=0){mini=A[i];minii=i;}
			if(A[i]>maxi){maxi=A[i];maxii=i;}
			N/=10;
			i++;
		}
		int tmp=A[i-1];
		for(int k=i-1;k>=0;k--)
		{
			if(k==i-1 && mini!=11)cout<<mini;
			else if(k==minii && minii!=-1)cout<<tmp;
			else cout<<A[k];
		}
		cout<<" ";
		for(int k=i-1;k>=0;k--)
		{
			if(k==i-1 && maxi!=0)cout<<maxi;
			else if(k==maxii && maxii!=10)cout<<tmp;
			else cout<<A[k];
		}}
		cout<<endl;
	}
}