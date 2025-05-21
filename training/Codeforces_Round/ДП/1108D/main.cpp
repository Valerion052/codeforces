#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    vector<char> d = {'R', 'G', 'B'};

    int ans=0;
    for (int i=1; i<n; ++i) {
        if (s[i]==s[i-1]) {
            ++ans;
            for (char x: d) {
                if (s[i-1]!=x) {
                    if (i!=n-1) {if (s[i+1]!=x) {s[i]=x;}}
                    else {s[i]=x;}
                }
            }
        }

    }
    cout << ans << "\n" << s;

}
