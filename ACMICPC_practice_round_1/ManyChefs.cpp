#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main(){
  int T;
  char S[3333];
  int i, j, len;

  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=2013 );
  while(T--){
    assert( scanf("%s",S)==1 );
    len = strlen(S);
    assert(1<=len&&len<=2013);
    rep(i,len) assert( ('A'<=S[i]&&S[i]<='Z')||S[i]=='?' );
    
    for(i=len-4;i>=0;i--){
      if(!(S[i  ]=='C' || S[i  ]=='?')) continue;
      if(!(S[i+1]=='H' || S[i+1]=='?')) continue;
      if(!(S[i+2]=='E' || S[i+2]=='?')) continue;
      if(!(S[i+3]=='F' || S[i+3]=='?')) continue;
    
      S[i  ] = 'C';
      S[i+1] = 'H';
      S[i+2] = 'E';
      S[i+3] = 'F';
    }
    
    rep(i,len) if(S[i]=='?') S[i] = 'A';
    puts(S);
  }
  return 0;
}

