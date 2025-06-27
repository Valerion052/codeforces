#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        priority_queue<pair<int, int>> pq;
        for (int i=1; i<=n; ++i) {int x; cin >> x; pq.push({x, i});}

        bool flag=1;
        vector<pair<int, int>> ans;
        while (flag) {
            flag=0;
            auto [x, it_1]=pq.top(); pq.pop();
            auto [y, it_2]=pq.top(); pq.pop();
            if (x>0 && y>0) {
                --x; --y;
                pq.push({x, it_1}); pq.push({y, it_2});
                ans.push_back({it_1, it_2});
                flag=1;
            }
        }
        cout << ans.size() << "\n";
        for (auto [i, j]: ans) {cout << i << ' ' << j << "\n";}
    }
}