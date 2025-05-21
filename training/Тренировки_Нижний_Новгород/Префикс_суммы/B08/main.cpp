#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}


        int local_max = 0, result = -10001;
        bool flag_parity = arr[0]%2;

        for (int j=0; j<n; ++j) {

            bool flag_odd = arr[j]%2;

            if (flag_odd == flag_parity) {
                local_max = max(arr[j], local_max+arr[j]);
            }
            else {
                local_max = arr[j];
            }

            result = max(result, local_max);
            flag_parity = !flag_odd;

        }

        cout << result << '\n';

    }
}