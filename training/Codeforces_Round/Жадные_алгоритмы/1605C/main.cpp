#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int ans=1e9;
        for (int i=0; i<n-1; ++i) {
            int d[3]{}; ++d[s[i]-'a'];
            for (int j=i+1; j<min(i+7, n); ++j) {
                ++d[s[j]-'a'];
                if (d[0]>d[1] && d[0]>d[2]) {ans=min(ans, j-i+1);}
            }
        }
        cout << (ans==1e9 ? -1: ans) << "\n";
    }
}