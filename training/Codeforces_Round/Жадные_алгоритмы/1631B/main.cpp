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

        int it = 1, count = 0;
        for (int j=n-2; j>=0; --j) {
            if (arr[j]==arr[n-1]) {++it;}
            else {
                j-=it-1;
                it*=2;
                ++count;
            }
        }
        cout << count << "\n";
    }
}