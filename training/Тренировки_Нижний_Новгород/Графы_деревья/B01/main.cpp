#include <iostream>
#include <vector>

using namespace std;

const int N = 2001;
vector<vector<int>> adj(N);
int level[N]{};

void DFS(int x, int p) {
    if (level[x]==0) {level[x] = level[p]+1;}

    for (auto v: adj[x]) {
        DFS(v, x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=1; i<=n; ++i) {
        int p;
        cin >> p;
        if (p==-1) {level[i]=1;}
        else {adj[p].push_back(i);}
    }

    int ans = 0;
    bool flag=1;
    while (flag) {
        flag=0;
        for (int j=1; j<=n; ++j) {
            if (level[j]==0) {flag=1;}
            if (level[j]==1) {DFS(j, -1);}
            ans = max(ans, level[j]);
        }
    }
    cout << ans;

}