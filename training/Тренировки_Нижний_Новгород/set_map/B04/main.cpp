#include <iostream>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<string, int> Users;

    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        if (Users.find(s) == Users.end()) {cout << "OK"; Users[s] = 1;}
        else {cout << s << Users[s]; ++Users[s];}
        cout << '\n';
    }
}