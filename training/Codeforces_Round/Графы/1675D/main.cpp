#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> ANS;

void DFS (bool (&visited)[], vector<vector<int>> &adj, vector<int> &ans, int x, int y) {

    if (visited[y]) {ans.clear();}
    visited[y]=1;
    ans.push_back(x);

    for (int v: adj[x]) {
        DFS(visited, adj, ans, v, x);
    }
    if (!visited[x]) {ANS.push_back(ans);}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n+1), ans(n+1);
        int start;
        for (int i=1; i<=n; ++i) {
            int num;
            cin >> num;
            if (num==i) {start=i;}
            else {adj[num].push_back(i);}
        }

        bool visited[n+1]{};
        vector<int> _;
        DFS(visited, adj, _, start, 0);

        cout << ANS.size() << "\n";
        for (auto x: ANS) {
            cout << x.size() << "\n";
            for (int y: x) {cout << y << ' ';}
            cout << "\n";
        }
        cout << "\n";
        ANS.clear();
    }
}