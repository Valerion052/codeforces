#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int row = max(n, m);
        int columns = min(n, m);
        int ans = columns * (row/2);
        
        if (row%2!=0) {
            ans+= columns%2==0 ? columns/2 : columns/2+1;
        }
        cout << ans << '\n';



    }
}