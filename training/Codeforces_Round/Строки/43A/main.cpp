#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<string, int> d;
    while (n--) {
        string s;
        cin >> s;
        ++d[s];
    }
    int _max=0;
    string ans;
    for (auto [k, v]: d) {
        if (v>_max) {_max=v; ans=k;}
    }
    cout << ans;
}