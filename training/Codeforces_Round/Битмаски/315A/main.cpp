// #include <iostream>
// #include <vector>

// using namespace std;

// const int N=1001;
// vector<vector<int>> adj(N);
// vector<bool> visited(N, 0);
// vector<int> counter(N, 0);

// void DFS(int x) {
//     for (int y: adj[x]) {
//         if (!visited[y]) {
//             if (x==y) {if (counter[x]<=1) {continue;}}
//             if (counter[x]<1) {continue;}
//             visited[y]=1;
//             DFS(y);
//         }
//     }
// }

// int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

//     int n; cin >> n;
//     for (int i=0; i<n; ++i) {
//         int u, v; cin >> u >> v;
//         ++counter[u];
//         adj[u].push_back(v);
//         // adj[v].push_back(u);
//     }

//     for (int i=1; i<N; ++i) {if (!visited[i] && counter[i]>0) {DFS(i);}}
//     int ans=0;
//     for (int i=1; i<N; ++i) {if (!visited[i]) {ans+=counter[i];}}
//     cout << ans;

// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i=0; i<n; ++i) {cin >> a[i] >> b[i];}

    int ans=0;
    for (int i=0; i<n; ++i) {
        bool flag=0;
        for (int j=0; j<n && !flag; ++j){
            if (i!=j && a[i]==b[j]) {flag=1;}
        }
        if (!flag) {++ans;}
    }
    cout << ans << '\n';
}
