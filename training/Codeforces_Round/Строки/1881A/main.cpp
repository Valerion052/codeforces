#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while (t--) {
        int n, m; cin >> n >> m;
        string s_1, s_2; cin >> s_1 >> s_2;

        string _s = "";
        int ans=-1;
        for (int i=0; i<=5 && ans<0; ++i) {
            _s+= i==0 ? s_1 : _s;
            for (int j=0; j<=_s.size()-m && ans<0 && _s.size()>=m; ++j) {
                if (_s.substr(j, m)==s_2) {ans=i;}
            }
        }
        cout << ans << ' ' << "\n";
    }
}