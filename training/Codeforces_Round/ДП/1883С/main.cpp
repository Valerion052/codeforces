#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

map<int, vector<int>> d = {
    {2, {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}},
    {3, {3, 6, 9, 12, 15, 18, 21}},
    {4, {4, 8, 12, 16, 20}},
    {5, {5, 10, 16, 20}},
};

void check(set<int> &s, int k, int &ans) {
    for (int x: s) {
        auto v = lower_bound(d[k].begin(), d[k].end(), x);
        if (v!=d[k].end()) {ans=min(ans, *v-x);}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        set<int> s;
        for (int i=0; i<n; ++i) {cin>>arr[i]; s.insert(arr[i]);}

        int ans=1e9;
        if (k==4) {
            check(s, k, ans);
            int count=0;
            for (int j=0; j<n; ++j) {if (arr[j]%2==0) {++count;}}
            ans=min(ans, max(0, 2-count));
        }
        else {check(s, k, ans);}
        cout << ans << "\n"; 
    }
}