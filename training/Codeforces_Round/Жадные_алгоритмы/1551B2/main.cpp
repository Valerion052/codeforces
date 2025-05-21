#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;

        vector<pair<int, int>> p(n);
        for (int i=0; i<n; ++i) {cin >> p[i].first; p[i].second=i;}
        sort(p.begin(), p.end());

        
        vector<int> ans(n, 0);
        vector<vector<pair<int, int>>> d(k+1);
        
        int it=1;
        int check=-1;
        for (int j=0; j<n; ++j) {
            if (p[j].first==check) {continue;}
            if (d[it].empty()) {
                d[it].push_back(p[j]);
                ans[p[j].second]=it;
                ++it;
            }
            else {
                if (d[it].back().first!=p[j].first) {
                    d[it].push_back(p[j]);
                    ans[p[j].second]=it;
                    ++it;
                }
                else {check=p[j].first;}
            }
            if (it>k) {it=1;}
        }

        for (int _i=it-1; _i>=1 && it!=1; --_i) {ans[d[_i].back().second]=0;}
        for (int x: ans) {cout << x << ' ';} cout << "\n";



    }   
}