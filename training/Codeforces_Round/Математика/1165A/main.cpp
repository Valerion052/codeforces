#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;

    string _s = s.substr(n-x, x);
    reverse(_s.begin(), _s.end());
    
    int ans=0;
    for (int j=0; j<_s.size(); ++j) {
        if (j==y) {if (_s[j]=='0') {++ans;}}
        else {if (_s[j]=='1') {++ans;}}
    }
    cout << ans;
}