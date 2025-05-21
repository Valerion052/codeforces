#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        long long Max = *max_element(arr, arr+n);
        long long Sum = accumulate(arr, arr+n, 0LL);

        // cout << "Max = " << Max << '\n';
        // cout << "Sum = " << Sum << '\n';
        
        long long result;
        if (Sum == 0) {result = 0;}
        else if (Sum >= 2 * Max) {result = 1;}
        else {result = 2 * Max - Sum;}

        cout << result << '\n';
    }
}