#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    for (int i=0; i<s.size(); ++i) {
        if (s[i]=='-') {
            if (s[i+1]=='-') {cout << 2;}
            else {cout << 1;}
            ++i;
        }
        else {cout << 0;}
    }
}