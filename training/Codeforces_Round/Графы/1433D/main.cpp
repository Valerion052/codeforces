#include <iostream>
#include <vector>
#include <map>

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
        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        bool d[n]{};
        d[0]=1;
        map<int, vector<int>> ans;

        for (int j=0; j<n; ++j) {
            for (int k=0; k<n; ++k) {
                if (!d[k] && j!=k && arr[j]!=arr[k]) {
                    d[k]=1;
                    ans[j].push_back(k);
                }
            }
        }

        bool flag=1;
        for (bool c: d) {if (!c) {flag=0; break;}}

        if (flag) {
            cout << "YES\n";
            for (int x=0; x<ans.size(); ++x) {
                for (int y: ans[x]) {
                    cout << x+1 << ' ' << y+1 << "\n";
                }
            }
        }
        else {cout << "NO\n";}
    }
}