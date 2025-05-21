#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int m;
    cin >> s >> m;

    int n = s.size();

    int arr[n]{};
    for (int i=1; i<n; ++i) {
        arr[i] = arr[i-1] + (s[i-1]==s[i] ? 1 : 0);
    }

    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << arr[r-1] - arr[l-1] << "\n";
    }
}