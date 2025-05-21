#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1];

    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[num] = i;
    }

    for (int j=1; j<=n; ++j) {
        cout << arr[j] << ' ';
    }


} 