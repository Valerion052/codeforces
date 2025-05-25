#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s_1, s_2; cin >> s_1 >> s_2;

    int ans=0;
    for (int i=0; i<s_2.size(); ++i) {
        if (s_1[ans]==s_2[i]) {++ans;}
    }
    cout << ans+1;
}