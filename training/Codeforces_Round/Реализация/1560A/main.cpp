#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    int n = 1667;
    int arr[n];
    int it = 1;
    for (int i=1; i<n; ++i) {
        if (i%3==0 || i%10==3) {continue;}
        else {arr[it]=i; ++it;}
    }

    while (t--) {
        int k;
        cin >> k;
        cout << arr[k] << "\n";
    }
}