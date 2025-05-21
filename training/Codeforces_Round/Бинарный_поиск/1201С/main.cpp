#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k; 

bool check(vector<long long> &arr, long long c) {
    long long value=0;
    for (int j=n/2; j<n; ++j) {value+=max(c-arr[j], 0ll);}
    return value<=k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   cin >> n >> k;

    vector<long long> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr.begin(), arr.end());

    long long l=1, r=2e9+1, ans=0;
    while(l<=r) {
        long long c=(l+r)/2;
        if (check(arr, c)) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    cout << ans;
}