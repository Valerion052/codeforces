#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    int* result = lower_bound(arr, arr+n, arr[n-1]);
    if (result == arr) {cout << -1;} else {cout << *(result-1);}
    
}