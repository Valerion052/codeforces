#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char, char> d = {{'W', 'B'}, {'B', 'W'}};

void DFS(vector<vector<char>> &adj, int x, int y, char value) {

    adj[x][y]=d[value];

    if (x<adj.size()-1) {if (adj[x+1][y]=='.') {DFS(adj, x+1, y, d[value]);}}
    if (x>0) {if (adj[x-1][y]=='.') {DFS(adj, x-1, y, d[value]);}}

    if (y<adj[x].size()-1) {if (adj[x][y+1]=='.') {DFS(adj, x, y+1, d[value]);}}
    if (y>0) {if (adj[x][y-1]=='.') {DFS(adj, x, y-1, d[value]);}}
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> adj(n);
    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        for (int j=0; j<m; ++j) {
            adj[i].push_back(s[j]);
        }
    }

    for (int x=0; x<n; ++x) {
        for (int y=0; y<m; ++y) {if (adj[x][y]=='.') {DFS(adj, x, y, 'W');}}
    }

    for (int _i=0; _i<n; ++_i) {
        for (int _j=0; _j<m; ++_j) {cout << adj[_i][_j];}
        cout << "\n";
    }

}