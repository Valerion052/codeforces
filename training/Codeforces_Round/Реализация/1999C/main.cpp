#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        pair<int, int> p[n+2];
        p[0]={0, 0}; p[n+1]={m, m};

        
        for (int i=1; i<=n; ++i) {cin >> p[i].first >> p[i].second;}
        
        int flag=0;
        for (int i=0; i<n+2 && !flag; ++i) {if (p[i].first-p[i-1].second >=s) {flag=1;}}
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
        
    }
}