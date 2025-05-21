#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        int arr[n];

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            arr[i] = num + i + 1;
        }

        sort(arr, arr+n);

        int ans = 0;
        for (int j=0; j<n; ++j) {
            if (c-arr[j] >=0) {
                ++ans;
                c-=arr[j];
            }
            else {break;}
        }

        cout << ans << "\n";
    }
}