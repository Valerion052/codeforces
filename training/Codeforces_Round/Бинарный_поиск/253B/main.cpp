#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    int ans=1e9;
    for (int j=0; j<n; ++j) {
        int* it = upper_bound(arr+j, arr+n, arr[j]*2);
        if (it!=arr+n) {if (arr[j]*2==*it) {++it;}}
        int drop = n-(it-arr)+j;
        ans=min(ans, drop);
    }
    cout << ans;

}