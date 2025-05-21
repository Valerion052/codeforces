#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    for (int j=0; j<m; ++j) {
        int l = 0, r = n, ans = n, num;
        cin >> num;

        while (l<=r) {
            int c = (l+r)/2;
            if (arr[c] >= num) {
                ans = c;
                r = c-1;
            }
            else {
                l = c + 1;
            }
        }

        cout << ans << '\n';
    }
}