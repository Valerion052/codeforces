#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    if (find(s.begin(), s.end(), 'H')!=s.end()) {cout << "YES"; return 0;}
    if (find(s.begin(), s.end(), 'Q')!=s.end()) {cout << "YES"; return 0;}
    if (find(s.begin(), s.end(), '9')!=s.end()) {cout << "YES"; return 0;}
    cout << "NO";
}