#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int first=-1, second = -1;

        for (int i=0; i<n; ++i) {if (s[i] == 'B') {first=i; break;}}
        for (int j=n-1; j>=0; --j) {if (s[j] == 'B') {second=j; break;}}

        if (first==-1) {cout << 0;}
        else {cout << second-first+1;}
        cout << '\n';

    }

}