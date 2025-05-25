#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int ans=0;
        for (int i=0; i<30; ++i) {
            if((n>>i)&1==1) {ans=i;}
        }
        cout << (1<<ans)-1 << "\n";
    }
}