#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s_1, s_2, s_12, s_3;
    cin >> s_1 >> s_2 >> s_3;
    s_12 = s_1+s_2;

    if (s_3.size() != s_12.size()) {cout << "NO"; return 0;}

    sort(s_12.begin(), s_12.end());
    sort(s_3.begin(), s_3.end());

    for (int i=0; i<s_3.size(); ++i) {
        if (s_3[i] != s_12[i]) {cout << "NO"; return 0;}
    }

    cout << "YES";
}