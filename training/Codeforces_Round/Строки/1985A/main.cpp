#include <iostream>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s_1, s_2;
        cin >> s_1 >> s_2;

        cout << s_2[0] << s_1.substr(1, s_1.size()) << ' ';
        cout << s_1[0] << s_2.substr(1, s_1.size()) << '\n';
    }
}