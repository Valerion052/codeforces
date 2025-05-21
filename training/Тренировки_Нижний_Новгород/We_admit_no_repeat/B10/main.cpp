#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long sum[n];
    partial_sum(arr, arr+n, sum);

    long long bottom = *min_element(sum, sum+n);
    long long top = *max_element(sum, sum+n);

    if (bottom < -w || top > w) {cout << 0; return 0;}

    if (bottom>=0) {cout << w - top + 1;}
    else {
        long long bottom_new = 0 - bottom;
        long long top_new = top - bottom;
        
        if (top_new > w) {cout << 0;}
        else if (bottom_new <= top_new) {cout << w - top_new + 1;}
        else {cout << w - bottom_new + 1;}
    }
}