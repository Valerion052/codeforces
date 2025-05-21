#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;

void dijkstra(vector<vector<int>>& adj, int start, int end) {
    int n = adj.size();
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[start]=0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int v = pq.top().second;
        pq.pop();

        if (d>dist[v]) {continue;}

        for (int x=0; x<n; ++x) {
            if (v==x) {continue;}
            if (adj[v][x] != -1) {
                int w = adj[v][x];
                if (dist[v]+w < dist[x]) {
                    dist[x]=dist[v]+w;
                    pq.push({dist[x], x});
                }
            }
        }
    }

    if (dist[end] == INF) {cout << -1;} else {cout << dist[end];}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, s, f;
    cin >> n >> s >> f;
    --s, --f;

    vector<vector<int>> adj(n, vector<int>(n));
;
    int index = 0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {cin >> adj[i][j];}
    }

    dijkstra(adj, s, f);
}