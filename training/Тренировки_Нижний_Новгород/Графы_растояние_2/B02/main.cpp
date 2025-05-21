#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

const long long INF = 1e18;

struct Edge 
{
    long long weight;
    int index;
    int name;

    bool operator>(const Edge &other) const {
        return weight > other.weight;
    }
};

vector<pair<int, int>> dijkstra(vector<vector<Edge>> adj, int start) {
    vector<long long> dist(adj.size(), INF);
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    vector<pair<int, int>> parent(adj.size());
    dist[start] = 0;
    pq.push({0, start, 0});

    while (!pq.empty()) {
        auto [d, v, n_1] = pq.top();
        pq.pop();

        if (d>dist[v]) {continue;}

        for (auto [w, x, n_2]: adj[v]) {
            if (dist[v]+w<dist[x]) {
                dist[x]=dist[v]+w;
                parent[x] = {v, n_2};
                pq.push({dist[x], x, n_2});
            }
            else if (dist[v]+w==dist[x]) {
                if (parent[x].second!=0 && n_2==0) {parent[x] = {v, 0};}
            }
        }
    }
    return parent;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<Edge>> adj(n+1);
    while (m--) {
        int u, v;
        long long x;
        cin >> u >> v >> x;
        adj[u].push_back({x, v, 0});
        adj[v].push_back({x, u, 0});
    }

    for (int i=1; i<=k; ++i) {
        int s;
        long long y;
        cin >> s >> y;
        adj[1].push_back({y, s, i});
        adj[s].push_back({y, 1, i});
    }
    
    set<int> check;
    vector<pair<int, int>> parent = dijkstra(adj, 1);
    for (int i = 2; i <= n; ++i) {
    if (parent[i].second != 0) {
        check.insert(parent[i].second);
    }
}
    cout << k - check.size();
}