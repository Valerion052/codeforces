#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int ans=0;
        int local_ans=0;
        for (int i=0; i<n; ++i) {
            if (s[i]=='0') {++local_ans;}
            if (s[i]!='0') {ans=local_ans;}
        }
        cout << n-ans-1 << "\n";
    }
}

