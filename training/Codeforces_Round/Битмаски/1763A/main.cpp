#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int d[11]{};
        for (int i=0; i<n; ++i) {
            for (int j=0; j<11; ++j) {d[j]+=(arr[i]>>j&1);}
        }

        int max=0, min=0;
        for (int i=0; i<11; ++i) {
            if (d[i]>0) {max|=(1<<i);}
            if (d[i]==n) {min|=(1<<i);}
        }
        cout << max - min << "\n";
    }
}