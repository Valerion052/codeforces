#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int ans = 1;
    for (int j=1; j<n; ++j) {
        if (arr[j] != arr[j-1]) {++ans;}
    }
    cout << ans;
}