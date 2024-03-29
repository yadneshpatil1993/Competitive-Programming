#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int main(){
  int T, S, M;
  char Sstr[10], Mstr[10]; int Slen, Mlen;

  int i, j, k, res;
  int fit, mx, next_fit, next_mx;
  int edge[10][10] = {0};

  rep(i,10) edge[i][i] = 1;
  edge[0][8] = 1;
  edge[1][0] = edge[1][3] = edge[1][4] = edge[1][7] = edge[1][8] = edge[1][9] = 1;
  edge[2][8] = 1;
  edge[3][8] = edge[3][9] = 1;
  edge[4][8] = edge[4][9] = 1;
  edge[5][6] = edge[5][8] = edge[5][9] = 1;
  edge[6][8] = 1;
  edge[7][0] = edge[7][3] = edge[7][8] = edge[7][9] = 1;
  edge[9][8] = 1;

  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=201301 );
  while(T--){
    scanf("%d%d",&S,&M);
    assert( 0<=S && S<=M && M<=20130120 );

    sprintf(Sstr,"%d",S); Slen = strlen(Sstr);
    sprintf(Mstr,"%d",M); Mlen = strlen(Mstr);
    rep(i,Slen) Sstr[i] -= '0';
    rep(i,Mlen) Mstr[i] -= '0';

    res = S;
    rep(k,Mlen-Slen+1){ 
      fit = 0; mx = -1;
      rep(i,Mlen){
        next_fit = next_mx = -1;

        rep(j,10){ 
          if(0<=i-k&&i-k<Slen && edge[Sstr[i-k]][j]==0) continue;

          if(next_mx < mx*10 + j) next_mx = mx*10 + j;
          if(j <  Mstr[i] && next_mx  < fit*10 + j) next_mx  = fit*10 + j;
          if(j == Mstr[i] && next_fit < fit*10 + j) next_fit = fit*10 + j;
        }

        fit = next_fit;
        mx  = next_mx;

        if(i-k >= Slen-1 && res < fit) res = fit;
        if(i-k >= Slen-1 && res < mx)  res = mx;
      }
    }

    printf("%d\n",res);
  }

  return 0;
}