#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    int max = *max_element(arr, arr+n);
    int* p = upper_bound(arr, arr+n, max) - 1;
    if (p != arr) {--p; cout << *p;} else {cout << -1;}
}