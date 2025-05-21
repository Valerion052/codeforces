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
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'B')) {cout << "A\n";} else {cout << "B\n";}
    }
}