#include <iostream>
#include <queue>

using namespace std;

int n, a, b;

int BFS() {
    queue<pair<int, int>> q;
    bool visited[n+1]{};
    q.push({0, n});
    visited[0]=1;

    while (!q.empty() && !visited[n]) {
        auto [_a, _b] = q.front();
        q.pop();

        if (_b-a>=0) {
            if (!visited[_a+a]) {
                q.push({_a+a, _b-a});
                visited[_a+a] = 1;
            }
        }
        if (_a-b>=0) {
            if (!visited[_a-b]) {
                q.push({_a-b, _b+b});
                visited[_a-b] = 1;
            }
        }
    }
    int ans = n+1;
    while (ans--) {if (visited[ans]) {break;}}
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> b;
    cout << BFS();
}