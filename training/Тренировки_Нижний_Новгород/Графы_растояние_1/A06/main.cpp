#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

void BFS(vector<vector<int>>& adj, int start, int end, map<int, pair<int, int>>& d) {
    vector<int> parent(adj.size(), -1);
    parent[start] = start;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto x: adj[v]) {
            if (parent[x]==-1) {
                q.push(x);
                parent[x] = v;
            }
        }
    }

    if (parent[end]==-1) {cout << "NO";}
    else {
        cout << "YES\n";
        vector<int> way;
        way.push_back(end);
        while (way.back()!=start) {way.push_back(parent[way.back()]);}
        for (int p=way.size()-1; p>=0; --p) {
            cout << d[way[p]].second+1 << ' ' << d[way[p]].first+1 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int W, H, x_1, y_1, x_2, y_2;
    cin >> W >> H >> x_1 >> y_1 >> x_2 >> y_2;


    int arr[H][W]{};
    map<int, pair<int, int>> d;
    int index = 0;
    for (int i=0; i<H; ++i) {
        for (int j=0; j<W; ++j) {
            char c;
            cin >> c;
            if (c=='.') {
                arr[i][j] = index;
                d[index] = {i, j};
                ++index;
            }
            else {arr[i][j] = -1;}
        }
    }

    vector<vector<int>> adj(index);
    for (int _i=0; _i<H; ++_i) {
        for (int _j=0; _j<W; ++_j) {
            if (arr[_i][_j]==-1) {continue;}
            else {
                if (_i>0) {
                    if (arr[_i-1][_j]!=-1) {
                        adj[arr[_i][_j]].push_back(arr[_i-1][_j]);
                    }
                }
                if (_i<H-1) {
                    if (arr[_i+1][_j]!=-1) {
                        adj[arr[_i][_j]].push_back(arr[_i+1][_j]);
                    }
                }
                if (_j>0) {
                    if (arr[_i][_j-1]!=-1) {
                        adj[arr[_i][_j]].push_back(arr[_i][_j-1]);
                    }
                }
                if (_j<W-1) {
                    if (arr[_i][_j+1]!=-1) {
                        adj[arr[_i][_j]].push_back(arr[_i][_j+1]);
                    }
                }
            }
        }
    }

    int start = arr[y_1-1][x_1-1];
    int end = arr[y_2-1][x_2-1];

    BFS(adj, start, end, d);
}