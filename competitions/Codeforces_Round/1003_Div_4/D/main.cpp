#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(pair<long long, vector<long long>> x, pair<long long, vector<long long>> y) {
    return x.first > y.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<long long, vector<long long>>> d;
        for (int _=0; _<n; ++_) {
            vector<long long> arr(m);
            long long _o = 0;
            for (int i=0; i<m; ++i) {
                cin >> arr[i];
                _o+=arr[i];
            }
            d.push_back({_o, arr});
        }
        sort(d.begin(), d.end(), f);

        vector<long long> ans;
        for (auto k: d) {
            for (auto x: k.second) {ans.push_back(x);}
        }

        if (ans.size() > 1) {
            for (int _k=1; _k<ans.size(); ++_k) {ans[_k]+=ans[_k-1];}
            for (int _c=1; _c<ans.size(); ++_c) {ans[_c]+=ans[_c-1];}
        }

        cout << ans.back() << "\n";

    }
}