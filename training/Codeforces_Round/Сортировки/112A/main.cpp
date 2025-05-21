#include <iostream>
#include <cctype>

using namespace std;

int main() {

    string s_1, s_2;
    cin >> s_1 >> s_2;

    for (int i=0; i<s_1.size(); ++i) {
        if (tolower(s_1[i]) != tos_2[i])) {
            if (tolower(s_1[i]) < tolower(s_2[i])) {
                cout << -1; return 0;
            } else {
                cout << 1; return 0;
            }
        }
    }
    cout << 0;

}