#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<string> s;
        string arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i]; s.insert(arr[i]);}

        for (int j=0; j<n; ++j) {
            bool flag=0;
            for (int k=1; k<arr[j].size() && !flag; ++k) {
                if (s.count(arr[j].substr(0, k))
                    &&
                    s.count(arr[j].substr(k, arr[j].size()-k))
                ) {flag=1;}
            }
            cout << flag;
        }
        cout << "\n";
    }
}