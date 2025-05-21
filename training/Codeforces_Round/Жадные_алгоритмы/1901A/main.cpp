#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        int arr[n+2]{0};
        arr[n+1] = x;
        for (int i=1; i<=n; ++i) {cin >> arr[i];}

        int max = 0;

        for (int j=1; j<n+2; ++j) {
            int value = arr[j]-arr[j-1];
            if (j==n+1) {value*=2;}
            if (value>max) {max=value;}
        }

        cout << max << '\n';
    }
}