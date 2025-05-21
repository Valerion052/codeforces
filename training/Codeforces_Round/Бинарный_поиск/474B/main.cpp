#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;

    int arr[n+1]{};

    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[i] = arr[i-1] + num;
    }

    cin >> m;
    for (int j=0; j<m; ++j) {
        int q;
        cin >> q;
        int* it = lower_bound(arr, arr+n, q);
        cout << distance(arr, it) << '\n';
    }
}