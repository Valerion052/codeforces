#include <iostream>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<string> ans;

    for (int i=0; i<s.size(); ++i) {
        ans.insert(s.substr(i, s.size()) + s.substr(0, i));
    }
    cout << ans.size();
}