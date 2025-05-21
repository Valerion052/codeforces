#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int n, m;
    cin >> n >> m;

    vector<set<char>> arr(m);

    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        for (int j=0; j<m; ++j) {arr[j].insert(s[j]);}
    }

    long long ans = 1;
    for (int k=0; k<m; ++k) {ans = (ans*arr[k].size())%MOD;}

    cout << ans;
}