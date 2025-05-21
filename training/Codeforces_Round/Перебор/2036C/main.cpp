#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        int q;
        cin >> s >> q;

        int n=s.size();
        int count=0;
        for (int i=0; i<n-3; ++i) {
            if (s.substr(i, 4) == "1100") {++count;}
        }

        while (q--) {
            int u;
            char v;
            cin >> u >> v;
            --u;

            for (int j=-3; j<=0; ++j) {
                int index = u+j;
                if (index>=0 && index+3<n) {
                    if (s.substr(index, 4) == "1100") {--count;}
                }
            }
            s[u]=v;
            for (int j=-3; j<=0; ++j) {
                int index = u+j;
                if (index>=0 && index+3<n) {
                    if (s.substr(index, 4) == "1100") {++count;}
                }
            }
            if (count>0) {cout << "YES\n";} else {cout << "NO\n";}
        }
    }
}