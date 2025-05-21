#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long arr[n];
        long long local_min = 0, result = 0, minus = 0;

        for (int i=0; i<n; ++i) {
            cin >> arr[i];

            if (arr[i]>local_min) {local_min = arr[i];}
            arr[i] = local_min - arr[i];
            }

        sort(arr, arr+n);

        for (int a=0; a<n; ++a) {
            result += (n-a+1)*(arr[a] - minus);
            minus = arr[a];
        }

        cout << result << endl;
    }
}


