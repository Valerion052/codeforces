#include <iostream>
#include <queue>

using namespace std;

bool BFS(int adj[], int n, int start, int end) {
    queue<int> q;
    bool visited[n+1]{};
    q.push(start);
    visited[start]=1;

    while (!q.empty()) {
        int v = q.back();
        q.pop();
        int row = v+adj[v];
        if (!visited[row]) {visited[row]=1; q.push(row);}
        if (row>=n) {break;}
    }
    return visited[end];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    int arr[n+1]{};
    for (int i=1; i<n; ++i) {cin >> arr[i];}

    if (BFS(arr, n, 1, t)) {cout << "YES";} else {cout << "NO";}


}