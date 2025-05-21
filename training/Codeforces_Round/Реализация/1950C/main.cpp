#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        if (s.substr(0, 2)=="00") {cout << "12" << s.substr(2, 3) << " AM\n";}
        else if (s.substr(0, 2)=="12") {cout << s << " PM\n";}
        else if (stoi(s.substr(0, 2)) > 12) {
            if (stoi(s.substr(0, 2))<22) {cout << 0;}
            cout << stoi(s.substr(0, 2))-12 << s.substr(2, 3) << " PM\n";
        }
        else {cout << s << " AM\n";}
    }
}