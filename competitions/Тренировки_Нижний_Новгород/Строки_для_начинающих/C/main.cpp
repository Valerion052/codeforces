#include <iostream>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    set<string> dict;

    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        if (dict.find(s)==dict.end()) {cout << "NO\n";}
        else  {cout << "YES\n";}
        dict.insert(s);
    }
}