#include <iostream>
#include <set>

using namespace std;

const int N=2e5+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n], dp[N]{};
        for (int i=0; i<n; ++i) {cin >> arr[i]; dp[arr[i]]=i;}

        set<int> d_1, d_2;
        int counter=0, ans=0;
        for (int i=0; i<n; ++i) {
            d_1.erase(arr[i]);
            d_2.insert(arr[i]);
            if (d_1.empty()) {
                bool flag=1;
                for (int j:d_2) {if (dp[j]<=i) {flag=0; break;}}
                if (flag) {++ans; d_1 = d_2; d_2.clear();}
            }
        }
        ++ans;
        cout << ans << "\n";
    }
}
