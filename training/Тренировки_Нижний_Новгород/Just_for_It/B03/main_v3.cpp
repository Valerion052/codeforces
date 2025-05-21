#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main () {

    string s_1, s_2;
    cin >> s_1 >> s_2;

    reverse(s_1.begin(), s_1.end());

    if (s_1 == s_2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}