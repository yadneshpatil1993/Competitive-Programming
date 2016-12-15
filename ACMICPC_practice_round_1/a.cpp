#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;

#define forup(i,a,b) for(int i=(a); i<(b); ++i)
#define fordn(i,a,b) for(int i=(a); i>(b); --i)
#define rep(i,a) for(int i=0; i<(a); ++i)

#define gi(x) scanf("%d ",&x)
#define gl(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf(" %s",x)

#define fs first
#define sc second

#define pb push_back
#define mp make_pair

const int inf=numeric_limits<int>::max();
const LL linf=numeric_limits<LL>::max();

const int max_n=310;

int t,n;
string board[max_n];
int grid[max_n][max_n];
bool visited[max_n][max_n];

void dfs(int i,int j) {
	if(min(i,j)<0 or max(i,j)>=n or visited[i][j] or grid[i][j]==-1) return;
	visited[i][j]=true;
	if(grid[i][j]==0) {
		forup(x,i-1,i+2)
			forup(y,j-1,j+2)
				dfs(x,y);
	}
}

int main() {
	cin>>t;
	rep(z,t) {
		printf("Case #%d: ", z+1);
		cin>>n;
		rep(i,n) cin>>board[i];
		rep(i,n)
			rep(j,n) {
				if(board[i][j]=='*') grid[i][j]=-1;
				else {
					grid[i][j]=0;
					forup(x,max(0,i-1),min(n,i+2))
						forup(y,max(0,j-1),min(n,j+2))
							if(board[x][y]=='*') grid[i][j]++;
				}
			}
		/*rep(i,n) {
			rep(j,n) printf("%d ", grid[i][j]);
			printf("\n");
		}*/
		rep(i,n)
			rep(j,n)
				visited[i][j]=false;

		int ans=0;
		rep(i,n)
			rep(j,n)
				if(grid[i][j]==0 and (not visited[i][j])) {
					dfs(i,j);
					ans++;
				}
		rep(i,n)
			rep(j,n)
				if(grid[i][j]>0 and (not visited[i][j]))
					ans++;
		printf("%d\n", ans);
	}
	return 0;
}
