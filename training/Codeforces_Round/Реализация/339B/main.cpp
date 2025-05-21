#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long ans = 0;
    long long arr[m+1]{1};
    for (int i=1; i<=m; ++i) {
        cin >> arr[i];
        if (arr[i]<arr[i-1]) {ans+=n-arr[i-1]+arr[i];}
        else {ans+=arr[i]-arr[i-1];}
    }

    cout << ans;

}