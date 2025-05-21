#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s_1, s_2, s_3;
        cin >> s_1 >> s_2 >> s_3;
        cout << s_1[0] << s_2[0] << s_3[0] << "\n";

    }
}