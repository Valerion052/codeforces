#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a = k/(n-1);
        if (k%(n-1)!=0) {++a;}
        
        int ans = a+k-1;
        cout << ans << '\n';
    }
}