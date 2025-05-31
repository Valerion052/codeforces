#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    string s, m; cin >> s >> m;

    int ans=0;
    for (int i=0; i<n; ++i) {
        int a = min(s[i]-'0', m[i]-'0');
        int b = max(s[i]-'0', m[i]-'0');
        ans+=min(b-a, 9-b+a+1);
    }
    cout << ans;
}