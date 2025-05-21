#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+1;
vector<vector<int>> adj(N);
vector<int> levels(N, 0);

void DFS(int x, int y, int p) {
    ++levels[p];
    for (int v: adj[x]) {
        if (v!=y) {DFS(v, x, p+1);}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=2; i<=n; ++i) {
        int p;
        cin >> p;
        adj[i].push_back(p);
        adj[p].push_back(i);
    }

    
    DFS(1, 0, 1);
    int ans=0;
    for (int j=1; j<N; ++j) {
        if (levels[j]==0) {break;}
        ans += levels[j]%2!=0 ? 1 : 0;
    }
    cout << ans;
}