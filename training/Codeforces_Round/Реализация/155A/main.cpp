#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int _min = arr[0];
    int _max = arr[0];
    int ans = 0;

    for (int j=1; j<n; ++j) {
        if (arr[j]<_min || arr[j]>_max) {++ans;}
        _min = min(_min, arr[j]);
        _max = max(_max, arr[j]);
    }

    cout << ans;
}