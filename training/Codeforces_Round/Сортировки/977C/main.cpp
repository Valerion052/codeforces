#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long int arr[n];

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    

    if (k>0) {
        if (n>1) {
            if (n==k) {
                if (arr[n-1] >= arr[n-2]) {
                    cout << arr[n-1];
                } else {
                    cout << arr[n-1]+1;
                    }
            } else if (arr[k]-1 >= arr[k-1]) {
                cout << arr[k]-1;
                }
            else {cout << -1;}

        } else {
            cout << arr[0];
        }
    }
    else {
        if (arr[k] > 1) {cout << 1;}
        else {cout << -1;}
    }
}