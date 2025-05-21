#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n;

bool cheak(vector<long long> arr, long long k) {

    int counter = 0;
    long long lower_bound = 1, upper_bound = n;
    
    for (int i = 0; i<n; ++i) {
        if (arr[i] <= arr[0]+2*k) {++counter;}
        else {lower_bound = i; break;}
    }
    for (int i = lower_bound; i<n; ++i) {
        if (arr[i] <= arr[lower_bound] + 2*k) {++counter;}
        else {upper_bound = i; break;}
    }
    for (int i = upper_bound; i<n; ++i) {
        if (arr[i] <= arr[upper_bound] + 2*k) {++counter;}
        else {break;}
    }
    return counter < n;
}


int main() {

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<long long> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        sort(arr.begin(), arr.end());

        long long l = 0, r = arr[n-1] - arr[0], ans = 0;

        while (l<=r) {
            long long c = (l+r)/2;
            if (cheak(arr, c)) {l = c + 1;}
            else {r = c - 1; ans = c;}
        }
        cout << ans << '\n';
    }

}
