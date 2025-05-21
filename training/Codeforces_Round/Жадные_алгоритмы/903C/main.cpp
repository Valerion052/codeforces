#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);

    int result = 1, pair = 1;

    for (int j=1; j<n; ++j) {
        if (arr[j]==arr[j-1]) {++pair;} else {pair = 1;}
        if (pair > result) {result = pair;}
    }

    cout << result;
}