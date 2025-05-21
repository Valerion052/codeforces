#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int n, T;
    cin >> n;

    vector<long long> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr.begin(), arr.end());
    cin >> T;

    int ans=0;
    for (int j=0; j<n; ++j) {
        auto it_upper = upper_bound(arr.begin(), arr.end(), arr[j]+T);
        ans=max(ans, (int)(it_upper-arr.begin()-j));
    }
    cout << ans;
}