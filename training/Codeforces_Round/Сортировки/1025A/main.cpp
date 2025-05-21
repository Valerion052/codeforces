#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n;
    string s;
    cin >> n >> s;

    if (n == 1) {cout << "YES"; return 0;}

    sort(s.begin(), s.end());

    for (int i=1; i<n; ++i) {
        if (s[i] == s[i-1]) {cout << "YES"; return 0;}
    }

    cout << "NO";
    
}