#include <iostream>
#include <algorithm>

using namespace std;

bool check(string s, int k) {

    char d[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i=0; i<=k; ++i) {
        if (find(s.begin(), s.end(), d[i])==s.end()) {return 0;}
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, k;
    cin >> t >> k;

    int ans=0;

    while (t--) {
        string s;
        cin >> s;
        if (check(s, k)) {++ans;}
    }
    cout << ans;
}