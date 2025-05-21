#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i=n-1; i>=0; --i) {cin >> arr[i];}

    int value = arr[n-k];

    int counter = 0;

    if (value == 0) {
        for (int j = n-k; j<n; ++j) {
            if (arr[j] != 0) {++counter;}
        }
    } else {
        int* people = lower_bound(arr, arr+n, value);
        counter = distance(people, arr+n);

    }
    cout << counter;
}