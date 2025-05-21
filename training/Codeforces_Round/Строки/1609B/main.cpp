#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    string s;
    cin >> n >> q >> s;

    int counter = 0;
    for (int i=0; i<n-2; ++i) {
        if (s.substr(i, 3) == "abc") {++counter;}
    }
    
    while (q--) {
        int pos;
        char c;
        cin >> pos >> c;
        --pos;

        if (n>3) {
            int start = max(pos-2, 0);
            int end = min(pos+2, n-1);
            string s_old = s.substr(start, end-start+1);
            string s_new = s_old;
            s_new[pos-start] = c;

            for (int j=0; j<s_new.size()-2; ++j) {
                if (s_old.substr(j, 3) != "abc" && s_new.substr(j, 3) == "abc") {++counter;}
                else if (s_old.substr(j, 3) == "abc" && s_new.substr(j, 3) != "abc") {--counter;}
            }

            s[pos] = c;
            cout << counter << "\n";
        }
        else {cout << 0 << "\n";}
    }
    
}