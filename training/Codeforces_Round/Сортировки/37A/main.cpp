#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    int _max = 1, local_max = 1, count = 1;
    for (int j=1; j<n; ++j) {
        if (arr[j]==arr[j-1]) {
            ++local_max;
            _max = max(_max, local_max);
        }
        else {
            ++count;
            local_max = 1;
        }
    }

    cout << _max << ' ' << count;
}