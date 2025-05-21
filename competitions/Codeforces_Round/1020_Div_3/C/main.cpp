#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr_a[n], arr_b[n];
        for (int i=0; i<n; ++i) {cin >> arr_a[i];}
        for (int j=0; j<n; ++j) {cin >> arr_b[j];}


        set<int> s;
        for (int x=0; x<n; ++x) {if (arr_b[x]>=0) {s.insert(arr_a[x]+arr_b[x]);}}

        int ans=0;
        if (s.size()==1) {
            int _min = *min_element(arr_a, arr_a+n);
            int _max = *s.begin();
            if (_min+k>=_max) {++ans;}
            for (int y=0; y<n && ans>0; ++y) {if (arr_a[y]>_max) {ans=0;}}
        }
        else if (s.size()==0) {
            int _min = *min_element(arr_a, arr_a+n);
            int _max = *max_element(arr_a, arr_a+n);
            ans = (k+_min)-_max+1;
        }
        cout << ans << "\n";

        
    }
}