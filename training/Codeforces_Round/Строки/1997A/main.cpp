#include <iostream>
#include <map>

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

        char dict[26] = {
            'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
            'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z',
            'x', 'c', 'v', 'b', 'n', 'm'};

        int target = s.size();
        for (int i=1; i<s.size(); ++i) {
            if (s[i]==s[i-1]) {target=i; break;}
        }

        cout << s.substr(0, target);
        for (auto x: dict) {if (s[target-1]!=x) {cout << x; break;}}
        cout << s.substr(target, s.size()-target);
        cout << '\n';
    }
}