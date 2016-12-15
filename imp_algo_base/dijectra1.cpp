#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
#define INF 99999999
struct compair
{
    bool operator() (PII &p1, PII &p2)
    {
        return p1.second>p2.second;
    }
};
int main()
{
    int v,e;
    cin>>v>>e;
    vector< vector<PII> > V(1001,vector<PII>() );
    for(int i=1;i<=e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        V[a].push_back(PII(b,w));
        V[b].push_back(PII(a,w));
    }
    bool visit[v+1];
    memset(visit,true,sizeof(visit));
    visit[1]=false;
    int dist[v+1];
    memset(dist,INF,sizeof(dist));
    dist[1]=0;
    priority_queue <PII,vector<PII>, compair> pq;
    for(int i=0;i<V[1].size();i++) pq.push(PII(V[1][i].first,V[1][i].second));
    while(!pq.empty())
    {
        if(visit[pq.top().first])
        {
            visit[pq.top().first]=false;
            dist[pq.top().first]=pq.top().second;
            for(int i=0;i<V[pq.top().first].size();i++) pq.push(PII(V[pq.top().first][i].first,dist[pq.top().first]+V[pq.top().first][i].second));
        }
        pq.pop();
    }
    for(int i=1;i<=v;i++) cout<<i<<" "<<dist[i]<<endl;

}
