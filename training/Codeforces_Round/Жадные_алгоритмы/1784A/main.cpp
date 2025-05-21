#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        sort(arr, arr+n);

        long long counter;
        int damag = 2;
        
        if (arr[0]==1) {counter = 0;} else {counter = arr[0] - 1;}

        for (int j=1; j<n; ++j) {
            if (arr[j] >= damag) {
                counter += arr[j] - damag;
                ++damag;
            }
        }

        cout << counter << '\n';
    }
}