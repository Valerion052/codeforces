#include <iostream>
#include <algorithm>

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

        int ans = 0;
        for (int j=0; j<n; ++j) {
            int local_max = 0;
            for (int k=j; k<n; ++k) {
                if (arr[j]>=arr[k]) {++local_max;}
            }
            ans=max(ans, local_max);
        }
        cout << n - ans << "\n";
    }
    
}