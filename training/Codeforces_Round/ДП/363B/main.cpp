#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int arr[n+1]{};
    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[i] = arr[i-1] + num;
    }

    int sum = 1e9, ans = 1;
    for (int j=0; j<=n-k; ++j) {
        int value = arr[j+k]-arr[j];
        if (value < sum) {ans = j; sum=value;}
    }
    ++ans;
    cout << ans;
}