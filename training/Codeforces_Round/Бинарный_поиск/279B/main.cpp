#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int n, t; cin >> n >> t;

    vector<long long> arr(n+1, 0);
    for (int i=1; i<=n; ++i) {int num; cin >> num; arr[i]=arr[i-1]+num;}

    int ans=0;
    for (int j=1; j<=n; ++j) {
        auto it = lower_bound(arr.begin()+j, arr.end(), arr[j-1]+t);
        if (it<arr.end()) {
            if (arr[j-1]+t==*it) {++it;}
        }
        ans=max(ans, (int)(it-arr.begin()-j));
    }
    cout << ans;
}