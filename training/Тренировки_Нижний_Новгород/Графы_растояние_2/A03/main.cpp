#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;

void dijkstra(vector<vector<pair<int, int>>> adj, int start, int end) {
    int n=adj.size();
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start]=0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [w, v] = pq.top();
        pq.pop();

        if (w>dist[v]) {continue;}

        for (auto [d, x]: adj[v]) {
            if (d+dist[v]<dist[x]) {
                dist[x] = d+dist[v];
                pq.push({dist[x], x});
            }
        }
    }


    if (dist[end]==INF) {cout << -1;}
    else {cout << dist[end];}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, start, end;
    cin >> n >> m >> start >> end;

    vector<vector<pair<int, int>>> adj(n+1);
    for (int i=0; i<m; ++i) {
        int b, c, w;
        cin >> b >> c >> w;
        adj[b].push_back({w, c});
        adj[c].push_back({w, b});
    }

    dijkstra(adj, start, end);
}