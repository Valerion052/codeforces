#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const long long INF = 1e18;

void dijkstra(vector<vector<pair<int, int>>>& adj, int start, int end) {
    int n=adj.size();
    vector<long long> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int parent[n]{};

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();

        if (d>dist[v]) {continue;}

        for (auto [w, x]: adj[v]) {

            if (dist[v]+w<dist[x]) {
                dist[x]=dist[v]+w;
                pq.push({dist[x], x});
                parent[x]=v;
            }
        }
    }

    if (dist[end]==INF) {cout << -1;}
    else {
        vector<int> print;
        int it = n-1;
        print.push_back(n-1);
        while (it!=1) {print.push_back(parent[it]); it = parent[it];}
        for (int p=print.size()-1; p>=0; --p) {cout << print[p] << ' ';}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n+1);
    while (m--) {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({w, b});
        adj[b].push_back({w, a});
    }

    dijkstra(adj, 1, n);
}