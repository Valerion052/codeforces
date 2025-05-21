#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int l=0, r=n-1, ans=0;
        while (l<r) {
            if (s[l]!=s[r]) {++ans; ++l, --r;}
            else {break;}
        }
        cout << n-ans*2 << "\n";
    }
}