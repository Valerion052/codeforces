#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> a, pair<int, int> b) {
    return a.second<b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n, p;
        cin >> n >> p;

        pair<int, int> arr[n];
        
        for (int i=0; i<n; ++i) {cin >> arr[i].first;}
        for (int j=0; j<n; ++j) {cin >> arr[j].second;}

        sort(arr, arr+n, f);

        long long ans = p;
        int _n = n-1;
        for (int k=0; k<n && _n>0; ++k) {
            if (arr[k].second < p) {
                ans = ans + min(_n, arr[k].first)*(long long)arr[k].second;
                _n-=min(_n, arr[k].first);
            }
            else {break;}
        }
        ans = ans + _n*(long long)p;
        
        cout << ans << '\n';
    }
}