#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int _ = s[0]-'0'<9 ? 9 : 1;
        vector<int> v;
        int p = 0;
        for (int i=n-1; i>=0; --i) {
            int x = _-p;
            int y = s[i]-'0';
            int ans = x-y;
            if (x<y) {ans+=10; p=1;} else {p=0;}
            v.push_back(ans);
        }

        for (int j=v.size()-1; j>=0; --j) {cout << v[j];} cout << "\n";
    }
}