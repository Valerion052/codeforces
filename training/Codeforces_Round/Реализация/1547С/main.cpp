#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;

        int arr_n[n], arr_m[m];
        for (int i=0; i<n; ++i) {cin >> arr_n[i];}
        for (int j=0; j<m; ++j) {cin >> arr_m[j];}

        bool flag=1;
        vector<int> ans;
        int it_n=0, it_m=0;

        while (flag) {
            flag=0;
            
            for (int _i=it_n; _i<n; ++_i) {
                if (arr_n[_i]==0) {flag=1; ++k; ++it_n; ans.push_back(arr_n[_i]);}
                else {
                    if (arr_n[_i]<=k) {flag=1; ++it_n; ans.push_back(arr_n[_i]);}
                    else {break;}
                }
            }

            for (int _j=it_m; _j<m; ++_j) {
                if (arr_m[_j]==0) {flag=1; ++k; ++it_m; ans.push_back(arr_m[_j]);}
                else {
                    if (arr_m[_j]<=k) {flag=1; ++it_m; ans.push_back(arr_m[_j]);}
                    else {break;}
                }
            }
        }

        if (ans.size()!=n+m) {cout << -1;} else {
            for (int x: ans) {cout << x << ' ';}
        }
        cout << "\n";

    }
    
}