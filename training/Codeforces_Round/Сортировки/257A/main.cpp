#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >>  m >> k;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n, [](int x, int y){return x>y;});

    int value = 0;
    int ans = 0;
    for (int j=0; j<n && value+k<m; ++j) {
        if (k>0) {
            value+=arr[j];
            ++ans;
            --k;
        }
        else {
            if (arr[j]-1==0) {break;}
            value+=arr[j]-1;
            ++ans;
        }
    }

    if (value+k >= m) {cout << ans;} else {cout << -1;}

}