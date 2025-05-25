#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;

    int ans=0;
    for (int i=0; i<=n; ++i) {
        for (int j=0; j<=m; ++j) {
            if (i*i+j==n && i+j*j==m) {++ans;}
        }
    }
    cout << ans;
}