#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int count = 0;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for (int j=1; j<n-1; ++j) {
        if (arr[0] < arr[j] && arr[j] < arr[n-1]) {++count;}
    }

    cout << count;
}