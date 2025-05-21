#include <iostream>

using namespace std;

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i=0; i<n; ++i) {cin >> arr[i];}

        bool flag = true;

        for (int j=1; j<n; ++j) {
            if (arr[j] >= arr[j-1]) {continue;}
            else {flag = false; break;}
        }

        if (k>1 || flag) {cout << "YES";} else {cout << "NO";};
        cout << '\n';
    }
}