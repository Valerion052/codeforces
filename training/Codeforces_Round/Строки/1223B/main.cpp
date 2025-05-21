#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s_1, s_2;
        cin >> s_1 >> s_2;

        bool flag = 0;

        for (int i=0; i<s_1.size() && !flag; ++i) {
            if (find(s_2.begin(), s_2.end(), s_1[i]) != s_2.end()) {flag=1;}
        }
        
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}