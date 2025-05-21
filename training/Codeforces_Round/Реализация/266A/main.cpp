#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int ans=0;
    for (int i=1; i<n; ++i) {
        if (s[i]==s[i-1]) {++ans; s[i]=s[i-1];}
    }

    cout << ans;


} 