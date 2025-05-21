#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int n, m;

const long long INF = 1e18;

struct Edge
{
    long long weight;
    int index;

    bool operator>(const Edge &other) const{
        return weight > other.weight;
    }
};

long long dijkstar(vector<vector<Edge>>& adj, vector<map<int, int>>& dict, int start, int end) {
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    vector<long long> dist(adj.size(), INF);
    pq.push({0, start});
    dist[start] = 0;
    

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();

        long long delay = 0;
        if (dict[v].count(dist[v])) {delay=dict[v][dist[v]];}

        if (d>dist[v]+delay) {continue;}

        for (auto [w, x]: adj[v]) {
            if (dist[v]+delay+w<dist[x]) {
                dist[x]=dist[v]+delay+w;
                pq.push({dist[x], x});
            }
        }
    }
    return dist[end];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    vector<vector<Edge>> adj(n+1);
    for (int i=1; i<=m; ++i) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    vector<map<int, int>> d(n+1);
    for (int j=1; j<=n; ++j) {
        int k;
        cin >> k;

        if (k<1) {continue;}

        int loc_arr[k];
        for (int _k=0; _k<k; ++_k) {cin >> loc_arr[_k];}

        int count = 1;
        d[j][loc_arr[k-1]] = count;

        for (int p=k-2; p>=0; --p) {
            if (loc_arr[p+1]-loc_arr[p]==1) {
                ++count;
                d[j][loc_arr[p]] = count;
            }
            else {
                count = 1;
                d[j][loc_arr[p]] = count;
            }
        }
    }

    
    long long ans = dijkstar(adj, d, 1, n);
    if (ans==INF) {cout << -1;} else {cout << ans;}

}