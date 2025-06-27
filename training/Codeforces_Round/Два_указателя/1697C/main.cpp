#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s_1, s_2; cin >> s_1 >> s_2;

        bool flag=1;
        for (int i=0; i<n && flag; ++i) {
            
            if (s_2[i]==s_1[i]) {continue;}
            if (s_2[i]=='a') {flag=0; break;}

            int _a = find(s_1.begin()+i, s_1.end(), 'a')-s_1.begin();
            int _b = find(s_1.begin()+i, s_1.end(), 'b')-s_1.begin();
            int _c = find(s_1.begin()+i, s_1.end(), 'c')-s_1.begin();
            
            if (s_2[i]=='b') {
                if (_c<_b || _b==n) {flag=0;}
                else {swap(s_1[i], s_1[_b]);}
            }
            else {
                if (_a<_c || _c==n) {flag=0;}
                else {swap(s_1[i], s_1[_c]);}
            }
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}