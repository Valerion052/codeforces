#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int max = *max_element(arr, arr+n);
    int sum = accumulate(arr, arr+n, 0);

    int l = max, r = sum+m;
    while(l<=r) {
        int c=(l+r)/2;
        if (c*n >= sum+m) {r=c-1;}
        else {l=c+1;}
    }
    cout << l << ' ' << max + m;
}