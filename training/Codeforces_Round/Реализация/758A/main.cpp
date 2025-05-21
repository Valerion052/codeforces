#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1]{};
    int _max = 0;

    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[i] = arr[i-1] + num;
        _max = max(_max, num);
    }

    cout << _max*n-arr[n];
}