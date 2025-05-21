#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct row
{
    int x;
    int y;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        row p[n];
        vector<pair<int, int>> ans;
        int counter = 0;

        for (int i=0; i<n; ++i) {cin >> p[i].x;}
        for (int _i=0; _i<n; ++_i) {cin >> p[_i].y;}

        for (int j=0; j<n; ++j) {
            for (int _j=1; _j<n; ++_j) {
                if (p[_j].x==p[_j-1].x) {
                    if (p[_j].y<p[_j-1].y) {
                        ++counter;
                        ans.push_back({_j+1, _j});
                        swap(p[_j], p[_j-1]);
                        continue;
                    }
                }
                else if (p[_j].x<p[_j-1].x) {
                    ++counter;
                    swap(p[_j], p[_j-1]);
                    ans.push_back({_j+1, _j});
                }
            }
        }
        
        bool flag = 1;
        for (int k=1; k<n && flag; ++k) {
            if (p[k].y < p[k-1].y) {flag=0;}
        }

        if (flag) {
            cout << counter << '\n';
            for (auto x: ans) {cout << x.first << ' ' << x.second << '\n';}
        }
        else {
            cout << -1 << '\n';
        }
    }
}