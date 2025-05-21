#include <iostream>
#include <map>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    if (s.size()%k!=0) {cout << -1; return 0;}
    int n = s.size()/k;

    map<char, int> dict;
    string ans;

    for (char _s: s) {++dict[_s];}

    for (auto x: dict) {
        if (x.second%k!=0) {cout << -1; return 0;}
        ans.append(x.second/k, x.first);
    }

    while (k--) {cout << ans;}
}