#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        if (n>=m && (n-m)%2==0) {cout << "YES\n";} else {cout << "NO\n";}
    }

}