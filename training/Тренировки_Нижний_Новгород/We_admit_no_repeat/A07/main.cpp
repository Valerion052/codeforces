#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    long long* bounder = unique(arr, arr+n);
    cout << distance(arr, bounder);

}