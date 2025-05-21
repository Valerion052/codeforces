#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    int result = 0;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for (int j=0; j<n; ++j) {
        if (arr[j]>m) {
            break;
        }
        m -= arr[j];
        ++result;
    }

    cout << result;
}