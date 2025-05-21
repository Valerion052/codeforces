#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(vector<int> &arr_n, vector<int> &arr_m, long long c) {

    int it=0;
    bool flag=1;
    for (int x=0; x<arr_n.size() && it<arr_m.size(); ++x) {
        if (arr_n[x]>=arr_m[it]) {++it;}
        else {
            if (flag) {
                if (c>=(long long)arr_m[it]) {flag=0; ++it;}
            }
        }
    }
    if (it<arr_m.size() && !flag && c >= arr_m[it]) {++it;}

    return it==arr_m.size();
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

        vector<int> arr_n(n), arr_m(m);
        for (int i=0; i<n; ++i) {cin >> arr_n[i];}
        for (int j=0; j<m; ++j) {cin >> arr_m[j];}

        if (check(arr_n, arr_m, 0)) {cout << 0 << "\n"; continue;}
        if (!check(arr_n, arr_m, 1e18)) {cout << -1 << "\n"; continue;}

        long long l=0, r=1e18, ans=0;
        while (l<=r) {
            long long c = (l+r)/2;
            if (check(arr_n, arr_m, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << ans << "\n";
    }

}