#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        char arr[n][n];
        for (int i=0; i<n; ++i) {
            string s; cin >> s;
            for (int j=0; j<n; ++j) {arr[i][j]=s[j];}
        }

        for (int i=0; i<n; i+=k) {
            for (int j=0; j<n; j+=k) {cout << arr[i][j];}
            cout << "\n";
        }
        
    }
}