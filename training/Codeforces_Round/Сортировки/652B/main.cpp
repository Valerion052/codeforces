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

    for (int j=0; j<n/2; ++j) {
        cout << arr[j] << ' ';
        cout << arr[n-1-j] << ' ';
    }
    
    if (n%2!=0) {cout << arr[n/2];}
}