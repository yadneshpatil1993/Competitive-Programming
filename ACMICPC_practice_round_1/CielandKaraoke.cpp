#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define double long double

#define EPS 1e-6

/* MAX = The number of iterations */
/* ABMAX = maximum value of A and B */
#define MAX 500
#define ABMAX 20120120
using namespace std;
/* |x| */
double ab(double x){if(x<0)return -x; return x;}

/* integral of |f(x)-g(x)|, where x=0..width, f(x) = con, g(0) = st, g'(t) = k */
double integ(double width, double con, double st, double k){
  double ed, tmp, res = 0;
  
  ed = st + k * width;
  if(ed < st) tmp = st, st = ed, ed = tmp;

  if(st > con-EPS) return ((st - con) + (ed - con)) / 2 * width;
  if(ed < con+EPS) return ((con - st) + (con - ed)) / 2 * width;

  res += (ed-con) * (ed-con) / ab(k) / 2;
  res += (con-st) * (con-st) / ab(k) / 2;

  return res;
}

int T, N, K;
double A[2222], B[2222];

int loop;                  /* The number of iterations which are done now */
double WS[2222], WE[2222]; /* Start point WS[i] and End point WE[i] of the interval */
double V[2222];            /* Target pitch in this interval */

int use[2222];             /* use[i] = 1, then we will turn in i-th segment. */
int next[2222];            /* after the i-th interval, then we go to next[i]-th interval */
double S[2222], E[2222];   /* S[i] denotes when reachs the target pitch corresponding i-th interval (arriving point), E[i] is departure point */
int Sfg[2222], Efg[2222];  /* before reaching this interval, Sfg = sign of g'(t), Efg = after leaving this interval */

double solve(void){
  int i, j, k;
  double w;
  double res;
  double ba, bb, bc;
  double down, up;
  double st, ed, tmp;
  int fg, ggg;

  rep(i,N) S[i] = WS[i], E[i] = WE[i], Sfg[i] = Efg[i] = 0;

  rep(i,N) use[i] = 0;
  i = 0;
  while(i<N) use[i] = 1, i = next[i];


  /* V[i] should not diverge, so V[i] stays near the correct pitch */
  rep(i,N) if(use[i] && V[i] >2*ABMAX) V[i] =2*ABMAX;
  rep(i,N) if(use[i] && V[i] < -ABMAX) V[i] = -ABMAX;

  if(loop < MAX/2) rep(i,N) if(use[i] && V[i] - B[i] > 0) V[i] -= (V[i] - B[i]) / 2;

  i=0;
  while(i<N-1){
    j=next[i];
    if(B[i] < B[j] && V[i] > V[j]){
      if(i==0)        V[j] = V[i];
      else if(j==N-1) V[i] = V[j];
      else            V[i] = V[j] = (V[i]+V[j])/2;
    }
    if(B[i] > B[j] && V[i] < V[j]){
      if(i==0)        V[j] = V[i];
      else if(j==N-1) V[i] = V[j];
      else            V[i] = V[j] = (V[i]+V[j])/2;
    }
    i=j;
  }


  i = 0;
  while(i<N-1){
    j = next[i];
    w = ab(V[j]-V[i]) / K; assert(i<j && j<N);

    if(w < WS[j] - WE[i] - EPS){
      tmp = -1 * (w - (WS[j] - WE[i])) * K;
      if(i==0){
        if(B[j] > B[i]) V[j] += tmp;
        else            V[j] -= tmp;
      } else {
        if(B[i] > B[j]) V[i] += tmp;
        else            V[i] -= tmp;
      }
      continue;
    }

    if(B[i] < B[j]) fg = 1; else fg = -1;

    /* calculate arriving point and departure point by binary search */
    ba = WS[j]-w; bb = WE[i];
    rep(ggg,150){
      bc = (ba+bb)/2;
      up = down = 0;

      if(fg==1){
        down += WE[i] - bc;
        up   += bc+w - WS[j];
      } else {
        up   += WE[i] - bc;
        down += bc+w - WS[j];
      }
      
      REP(k,i+1,j){
        st = V[i] + (WS[k] - bc) * fg * K;
        ed = V[i] + (WE[k] - bc) * fg * K;

        if(st > ed) tmp = st, st = ed, ed = tmp;
        if(st > B[k]){ down += WE[k]-WS[k]; continue; }
        if(ed < B[k]){ up   += WE[k]-WS[k]; continue; }
        up   += (B[k] - st) / K;
        down += (ed - B[k]) / K;
      }

      if(up > down){
        if(fg>0) bb = bc;
        else     ba = bc;
      } else {
        if(fg<0) bb = bc;
        else     ba = bc;
      }
    }

    bc = (ba+bb)/2;
    E[i] = bc,   Efg[i] = fg;
    S[j] = bc+w, Sfg[j] = fg;

    i = next[i];
  }

  /* V[i] are modified */
  REP(i,1,N-1) if(use[i]){
    if(Sfg[i] > 0 && Efg[i] > 0) continue;
    if(Sfg[i] < 0 && Efg[i] < 0) continue;

    w = E[i] - S[i];
    if(w > 0){
      if(loop%2==0){
        tmp = w * K / 3;
        if(tmp > ab(B[i]-V[i])) tmp = ab(B[i]-V[i]);
        if(B[i] > V[i]) V[i] += tmp;
        else            V[i] -= tmp;
      }
    } else {
      if(loop%2==1){
        tmp = (-w) * K / 3;
        if(Sfg[i] - Efg[i] > 0) V[i] -= tmp;
        if(Sfg[i] - Efg[i] < 0) V[i] += tmp;
      }
    }
  }

  if(loop > MAX-10){
    rep(i,N) if(use[i] && (E[i]-S[i] < -EPS && E[i]-S[i] < -EPS * (ab(E[i])+ab(S[i])))){ /* it is impossible */
      return 1e100;
    }
  }

  /* calculate the answer if the current V[i] is used */
  res = 0;
  i = 0;
  tmp = B[0];
  for(;;){
    res += integ(E[i]-S[i], B[i], tmp, 0);
    res += integ(WE[i]-E[i], B[i], tmp, K*Efg[i]);
    tmp += (WE[i]-E[i]) * K * Efg[i];
    REP(j,i+1,next[i]){
      res += integ(WE[j]-WS[j], B[j], tmp, K*Efg[i]);
      tmp += (WE[j]-WS[j]) * K * Efg[i];
    }
    if(next[i] == N) break;

    j = next[i];
    res += integ(S[j]-WS[j], B[j], tmp, K*Efg[i]);
    tmp += (S[j]-WS[j]) * K * Efg[i];

    i = j;
  }

  if(ab(tmp-B[N-1]) > EPS) return 1e100;
  return res;
}


double res;

void dfs(int depth){ /* btute-force which segments are used*/
  int i, j;
  double tmp;

  if(depth==N-1){
    rep(i,N) V[i] = B[i];
    rep(loop,MAX) tmp = solve();
    if(res > tmp) res = tmp;
    return;
  }

  REP(i,depth+1,N){
    next[depth] = i;
    dfs(i);
  }
}

int main(){
  int i, j;
  int NNN = 0;

  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=250 );
  while(T--){
    assert( scanf("%d%d",&N,&K)==2 );
    assert( 2<=N && N<=8 );
    assert( 1<=K && K<=4 );
    NNN += N*N*N;
    assert(NNN<=2013);
    
    rep(i,N-1) assert( scanf("%Lf",A+i)==1 ), assert( 0<=A[i] && A[i]<=ABMAX );
    rep(i,N) assert( scanf("%Lf",B+i)==1 ), assert( 0<=B[i] && B[i]<=ABMAX );

    rep(i,N-1) A[i] += ABMAX+100;
    A[N-1] = A[N-2] + ABMAX+100;
    next[N-1] = N;

    REP(i,1,N) assert( A[i-1] < A[i] );

    WS[0] = 0;
    REP(i,1,N) WE[i-1] = WS[i] = A[i-1];
    WE[N-1] = A[N-1];

    res = 1e100;
    dfs(0);

    assert(res < 1e50);
    printf("%.10Lf\n",res);
  }

  return 0;
}