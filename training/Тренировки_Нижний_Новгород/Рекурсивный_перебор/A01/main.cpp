#include <iostream>

using namespace std;

const int N=5;
int m;
int ans[5]{};

void DFS(int level) {

    if (level==N) {
        for (int x: ans) {cout << x << ' ';} cout << "\n";
        return;
    }

    for (int i=0; i<m; ++i) {
        ans[level]=i;
        DFS(level+1);
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m;
    DFS(0);
}