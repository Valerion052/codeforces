#include <iostream>
#include <vector>

using namespace std;

const int m = 2;

void DFS(int level, vector<int> &ans) {

    if (level==ans.size()) {
        for (int x: ans) {cout << x << ' ';} cout << "\n";
        return;
    }

    for (int i=0; i<m; ++i) {
        ans[level]=i;
        DFS(level+1, ans);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> ans(n, 0);
    DFS(0, ans);
}