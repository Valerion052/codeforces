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
    bool even = 0, odd = 0;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        if (!even && arr[i]%2==0) {even=1;}
        if (!odd && arr[i]%2!=0) {odd=1;}
    }

    if (even && odd) {
        sort(arr, arr+n);
        for (int j=0; j<n; ++j) {cout << arr[j] << ' ';}
    }
    else {
        for (int k=0; k<n; ++k) {cout << arr[k] << ' ';}
    }
}

