#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    map<char, int> dict = {{'T', 4}, {'C', 6}, {'O', 8}, {'D', 12}, {'I', 20}};
    int ans = 0;

    while (t--) {
        string s;
        cin >> s;
        ans+=dict[s[0]];
    }

    cout << ans;
}