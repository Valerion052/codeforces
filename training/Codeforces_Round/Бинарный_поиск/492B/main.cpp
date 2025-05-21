#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    double ans = 0;
    for (int j=1; j<n; ++j) {
        ans = max(ans, (double)(arr[j]-arr[j-1])/2);
    }
    if (arr[0]!=0) {ans = max(ans, (double)arr[0]);}
    if (arr[n-1]!=l) {ans = max(ans, (double)(l-arr[n-1]));}
    
    printf("%.9f", ans);
}