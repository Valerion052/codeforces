#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    string check = "hello";

    for (int i=0; i<s.size(); ++i) {
        if (check.empty()) {break;}
        if (s[i]==*check.begin()) {check.erase(check.begin());}
    }

    if (check.empty()) {cout << "YES";} else {cout << "NO";}

}