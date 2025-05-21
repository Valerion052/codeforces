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

        int l=0, r=n-1, ans=0;
        while (l<=r) {
            cout << arr[l] << ' ' ;
            if (l!=r) {cout << arr[r] << ' ';}
            
            ++l; --r;
        }
        cout << "\n";
    }
}