#include <iostream>
#include <set>

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

        int arr[n][n]{};
        bool v[2*(n+1)]{};

        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> arr[i][j];
                v[arr[i][j]]=1;
            }
        }

        for (int k=1; k<=2*n; ++k) {if (!v[k]) {cout << k << ' '; break;}}
        for (int _i=0; _i<n; ++_i) {cout << arr[0][_i] << ' ';}
        for (int _j=1; _j<n; ++_j) {cout << arr[n-1][_j] << ' ';}
        cout << "\n";
        
    }
}