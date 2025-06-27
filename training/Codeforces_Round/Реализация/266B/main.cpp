#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t; cin >> n >> t;
    string s; cin >> s;

    while (t--) {
        bool d[n]{};
        for (int i=n; i>0; --i) {
            if (s[i]=='G' && !d[i]) {if (s[i-1]!='G') {d[i-1]=1;} swap(s[i], s[i-1]);}
        }
    }
    cout << s;
}