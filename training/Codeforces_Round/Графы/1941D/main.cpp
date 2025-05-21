#include <iostream>
#include <vector>
#include <set>

using namespace std;

int calcilete_l(int x, int y, int n) {
    int ans = (x+y)%n;
    ans += ans==0 ? n : 0;
    return ans;
}

int calcilete_r(int x, int y, int n) {
    int ans = x-y%n;
    ans += ans<=0 ? n : 0;
    return ans;
}

void DFS(int level, int n, vector<pair<int, char>> &d, vector<set<int>> &ans) {
    if (level>d.size()-1) {return;}

    for (int x: ans[level-1]) {
        if (d[level].second=='0' || d[level].second=='?') {
            int index_l = calcilete_l(x, d[level].first, n);
            ans[level].insert(index_l);
        }
        if (d[level].second=='1' || d[level].second=='?') {
            int index_r = calcilete_r(x, d[level].first, n);
            ans[level].insert(index_r);
        }
    }
    DFS(level+1, n, d, ans);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> d(m+1);
        for (int i=1; i<=m; ++i) {cin >> d[i].first >> d[i].second;}

        vector<set<int>> ans(m+1);
        ans[0].insert(x);
        
        DFS(1, n, d, ans);
        
        cout << ans[m].size() << "\n";
        for (int _: ans[m]) {cout << _ << ' ';}
        cout << "\n";
    }
}