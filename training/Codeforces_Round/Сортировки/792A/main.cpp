#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], ans[n-1];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);
    for (int j=1; j<n; ++j) {ans[j-1] = arr[j]-arr[j-1];}
    int _min = *min_element(ans, ans+n-1);

    cout << _min << ' ' << count(ans, ans+n-1, _min);
}