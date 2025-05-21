#include <iostream>

using namespace std;

int main() {
    string s, s_lower, s_upper;
    cin >> s;

    s_lower = s_upper = s;
    int counter = 0;

    for (int i=0; i<s.size(); ++i) {
        if (s[i] >= 'A' && s[i]<='Z') {
            ++counter;
            s_lower[i] = static_cast<char>(s[i] + 32);
        }
        else {s_upper[i] = static_cast<char>(s[i] - 32);}
    }

    if (s.size()-counter>=counter) {cout << s_lower;} else {cout << s_upper;}

}