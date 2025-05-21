#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n, k;
    cin >> n >> k >> s;

    if (k>0 && n==1) {cout << 0; return 0;}
    else if (k>0 && s[0]!='1') {cout << 1; --k;}
    else {cout << s[0];}

    for (int i=1; i<n; ++i) {
        if (k==0) {cout << s.substr(i, n-i); return 0;}
        else if (s[i]!='0') {--k;}
        cout << 0;
    }
}