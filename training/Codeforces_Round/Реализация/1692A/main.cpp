#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, arr[3];
        cin >> a >> arr[0] >> arr[1] >> arr[2];

        int ans=0;
        for (int x: arr) {x>a ? ++ans : 0;}
        cout << ans << "\n";
    }
}