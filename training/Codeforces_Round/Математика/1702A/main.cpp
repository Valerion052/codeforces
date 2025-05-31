#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans=1e9+1;
        for (int x: {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000}) {
            if (n>=x) {ans=min(ans, n-x);}
        }
        cout << (ans==1e9+1 ? 0:ans) << "\n";
    }

}