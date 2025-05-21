#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    long long ans=0;
    long long bank=0;
    for (int j=1; j<=n; ++j) {
        long long v = arr[j-1]-arr[j];
        ans-=min(bank+v, 0ll);
        bank=max(bank+v, 0ll);
    }
    cout << ans;
}