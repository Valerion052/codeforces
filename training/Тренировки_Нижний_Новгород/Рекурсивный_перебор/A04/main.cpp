#include <iostream>
#include <vector>

using namespace std;

const int N = 9;
bool check[N];

void DFS(int level,  vector<int> &ans) {
    
    if (level==ans.size()) {
        for (auto x: ans) {cout << x << ' ';} cout << "\n";
        return;
    }

    for (int i=1; i<=ans.size(); ++i) {
        if (check[i]) {continue;}
        ans[level]=i;

        check[i]=1;
        DFS(level+1, ans);
        check[i]=0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> ans(n);
    DFS(0, ans);
}