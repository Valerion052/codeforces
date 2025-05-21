#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <map>

using namespace std;

const int N = 201;
map<string, vector<string>> adj;
map<string, int> visited;

void DFS(string s) {
    for (auto x: adj[s]) {
        if (visited[x]==0) {
            visited[x] = visited[s]+1;
            DFS(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        string s_1, s_2, s_3;
        cin >> s_1 >> s_2 >> s_3;
        transform(s_1.begin(), s_1.end(), s_1.begin(), ::tolower);
        transform(s_3.begin(), s_3.end(), s_3.begin(), ::tolower);
        adj[s_3].push_back(s_1);
        visited[s_1] = 0;
        visited[s_3] = 0;
    }

    ++visited["polycarp"];
    DFS("polycarp");

    int ans = 0;
    for (auto [k, v]: visited) {ans = max(ans, v);}

    cout << ans;
}