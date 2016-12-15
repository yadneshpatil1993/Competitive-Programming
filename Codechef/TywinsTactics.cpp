#include <bits/stdc++.h>
using namespace std;
vector <int> adj[122222];
int num[122222];
int pos[122222];
int node[122222];
int weight[122222];
int n;
int index__;

void dfs(int u) {
    num[u] = 1;
    pos[u] = ++index__;

    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if (num[v] == 0) {
            dfs(v);
            num[u] += num[v];
        }
    }
}
void update(int pos, int diff) {
    while (pos <= n) {
        node[pos] += diff;
        pos += pos & -pos;
    }
}
int get (int pos) {
    int sum = 0;
    while (pos) {
        sum += node[pos];
        pos -= pos & -pos;
    }
    return sum;
}

int main() {
    int m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)scanf("%d", weight + i);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)update(pos[i], weight[i]);
    while (m--) {
        char c;
        cin >> c;
        if (c == 'Q') {
            int u;
            scanf("%d", &u);
            printf("%d\n", get(pos[u] + num[u] - 1) - get(pos[u] - 1));
        }
        else {
            int u, value;
            scanf("%d%d", &u, &value);

            update(pos[u], value - weight[u]);
            weight[u] = value;
        }
    }
    return 0;
}
