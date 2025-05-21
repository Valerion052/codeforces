#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int find_value = arr[f-1];
        sort(arr, arr+n, [](int x, int y){return x>y;});
        int new_value = arr[k-1];

        if (k==n) {cout << "YES";}
        else if (new_value>find_value) {cout << "NO";}
        else if (new_value<find_value) {cout << "YES";}
        else {
            if (new_value == arr[k]) {cout << "MAYBE";}
            else {cout << "YES";}
        }
        cout << '\n';
    }
}