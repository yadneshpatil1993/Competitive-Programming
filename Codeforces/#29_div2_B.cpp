#include <bits/stdc++.h>
using namespace std;
int main()
{
	float l,d,v,g,r,count=0;
	cin>>l>>d>>v>>g>>r;
	float t1= d/v;
	int  t2= (int)t1/(g+r);
	t1 = t1-t2*(g+r); 
	if(t1<g) printf("%.7f\n",l/v); 
	else  printf("%.7f\n",(g+r-t1)+l/v);
	return 0;
} 