#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        if (s.size() < 11) {cout << s << '\n';}
        else {cout << s[0] << s.size()-2 << s[s.size()-1] << '\n';}
    }
}