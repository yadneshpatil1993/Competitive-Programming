#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define DD double


void matmulti(DD F[26][26],DD M[26][26])
{
    DD TT[26][26];
    int i,j,k;
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            DD sum=0;
            for(k=0;k<26;k++)sum+= (DD)(F[i][k]*M[k][j] );
            TT[i][j]=sum;
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)F[i][j]=TT[i][j];
    }
}


void matpower(DD A1[26][26],DD B1[26][26],LL n)
{
    if(n==1) return;
    matpower(A1,B1,n/2);
    matmulti(A1,A1);
    if(n%2!=0) matmulti(A1,B1);
}


int main()
{
    int Test;
    cin>>Test;
    while(Test--)
    {
        LL n,k;
        int i,j,len=0;
        DD A[26][26],B[26][26];
        string S;
        map<string,int> Map1;

        cin>>n>>k;
        cin>>S;
        for(i=0;i<26;i++){for(j=0;j<26;j++){cin>>A[i][j];B[i][j]=A[i][j];}}

        matpower(A,B,k);
        len=S.length();
        DD res=0.0000;
        for(i=1;i<=n;i++)
        {
            string S2;
            cin>>S2;
            if(S2.length()==S.length() and Map1.find(S2)==Map1.end())
            {
                DD temp=1.0000;
                for(j=0;j<len;j++)temp=temp*A[S[j]-97][S2[j]-97];
                res+=temp;
                Map1[S2]=1;
            }
        }
        printf("%.7f\n",res);
    }
}
