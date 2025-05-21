#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >>t;
    while (t--) {
        int n;
        string s_1, s_2;
        cin >> n >> s_1 >> s_2;

        for (int i=0; i<n; ++i) {
            if (s_1[i]=='G') {s_1[i]='B';}
            if (s_2[i]=='G') {s_2[i]='B';}
        }
        if (s_1==s_2) {cout << "YES\n";} else {cout << "NO\n";}

    }
}