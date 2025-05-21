#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z') {cout << static_cast<char>(s[0] - 32);}
    else {cout << s[0];}
    cout << s.substr(1, s.size());
}