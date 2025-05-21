#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    int ans=0;
    for (int j=0; j<n; ++j) {
        int* it = upper_bound(arr+j, arr+n, arr[j]+5);
        int dist = distance(arr, it);
        ans=max(ans, dist-j);
    }
    
    cout << ans;
}