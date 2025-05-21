#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s_1, s_2;
    cin >> s_1 >> s_2;

    transform(s_1.begin(), s_1.end(), s_1.begin(), [](char x){return tolower(x);});
    transform(s_2.begin(), s_2.end(), s_2.begin(), [](char x){return tolower(x);});

    if (s_1 < s_2) {cout << -1;}
    else if (s_1 > s_2) {cout << 1;}
    else {cout << 0;}
    cout << '\n';
}