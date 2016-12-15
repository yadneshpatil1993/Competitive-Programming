#include <bits/stdc++.h>
#define LL long long int
#define MOD 1000000007;
using namespace std;
int main()
{
	LL A[3];
	cin>> A[0] >> A[1] >> A[2];
	sort(A,A+3);
	cout<< min(A[0]+A[1],(A[0]+A[1]+A[2])/3)<<endl;
	return 0;
}