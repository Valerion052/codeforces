#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[n+1]; arr[n]=1;
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    cout << count(arr, arr+n, 1) << "\n";
    for (int i=1; i<=n; ++i) {if (arr[i]==1) {cout << arr[i-1] << ' ';}}
}   