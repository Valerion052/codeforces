#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n+1, 1);
        for (int i=1; i<=m; ++i) {
            int x, y; cin >> x >> y;
            int _x = min(x, y);
            int _y = max(x, y);
            arr[_y] = max(_x+1, arr[_y]);
        }
        long long ans=n;
        for (int i=1; i<=n; ++i) {
            arr[i]=max(arr[i], arr[i-1]);
            ans+=i-arr[i];
        }
        cout << ans << "\n"; 
    }
}