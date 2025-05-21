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

        int arr_a[n], arr_b[n];
        int min_a, min_b;
        min_a = min_b = 1e9+7;
        
        for (int i=0; i<n; ++i) {
            cin >> arr_a[i];
            if (arr_a[i]<min_a) {min_a=arr_a[i];}
        }
        for (int _i=0; _i<n; ++_i) {
            cin >> arr_b[_i];
            if (arr_b[_i]<min_b) {min_b=arr_b[_i];}
        }

        long long ans=0;
        for (int j=0; j<n; ++j) {
            ans+=max(arr_a[j]-min_a, arr_b[j]-min_b);
        }

        cout << ans << '\n';

    }
}