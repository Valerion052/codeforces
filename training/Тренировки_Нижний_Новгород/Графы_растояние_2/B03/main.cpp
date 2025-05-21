#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

struct Edge
{
    long long weight;
    int index;
    int name;

    bool operator>(const Edge &other) const {
        return weight > other.weight;
    }
};


long long INF = 1e18;

vector<pair<int, int>> dijkstra(vector<vector<Edge>> adj, int start) {
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    vector<long long> dist(adj.size(), INF);
    vector<pair<int, int>> parent(adj.size());
    pq.push({0, start, -1});
    dist[start] = 0;
    parent[start]={-1, 0};

    long long length = 0;

    while (!pq.empty()) {
        auto [d, v, n_1] = pq.top();
        pq.pop();

        if (d>dist[v]) {continue;}

        for (auto [w, x, n_2] : adj[v]) {
            if (dist[v]+w<dist[x]) {
                if (dist[x] != INF) {length = length - parent[x].second;}
                length += w;
                dist[x]=dist[v]+w;
                pq.push({dist[x], x, n_2});
                parent[x]={n_2, w};
            }
            else if (dist[v]+w==dist[x]) { 
                if (w<parent[x].second) {
                    length = length-parent[x].second+w;
                    parent[x]={n_2, w};
                }
            }
        }
    }
    cout << length << "\n";
    return parent;
}

int main() {
    ios::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> adj(n+1);
    for (int i=1; i<=m; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v, i});
        adj[v].push_back({w, u, i});
    }

    int start;
    cin >> start;

    vector<pair<int, int>> parent = dijkstra(adj, start);

    set<int> ans;
    for (int i=1; i<=n; ++i) {if (parent[i].first!=-1) {ans.insert(parent[i].first);}}
    for (auto j: ans) {cout << j << ' ';}
}