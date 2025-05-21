#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;

        vector<int> arr(n), d(n);
        for (int i=0; i<n; ++i) {
            cin >> arr[i];
            if (i==0) {d[i]=arr[i];}
            else {d[i]=max(arr[i], d[i-1]);}
        }


        for (int j=0; j<q; ++j) {
            int i, k; cin >> i >> k; --i;
            
            int _k = k-max(0, i-1);

            if (arr[i]!=d[i] || _k<=0) {cout << 0;}
            else {
                auto it = upper_bound(d.begin(), d.end(), arr[i]);
                if (it!=d.end()) {
                    int values = it-d.begin()-i;
                    if (i==0) {--values;}
                    cout << min(_k, values);
                }
                else {cout << _k;}
            }
            cout << "\n";
        }
    }   
}