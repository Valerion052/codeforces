#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int arr[30]{};

        for (int i=0; i<n; ++i) {++arr[s[i]-'A'];}

        int ans=0;
        for (int i=0; i<=26; ++i) {if (arr[i]>=i+1) {++ans;}}
        cout << ans << "\n";
    }
}