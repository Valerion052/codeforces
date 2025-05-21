#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        int arr[2*n];
        for (int i=0; i<2*n; ++i) {cin >> arr[i];}

        int counter_0 = count(arr, arr+2*n, 0);
        int counter_1 = count(arr, arr+2*n, 1);

        int Max = min(counter_0, counter_1);

        // cout << counter_0 << ' ' << counter_1;

        if (counter_0%2 > 0 && counter_1%2 > 0) {cout << 1;}
        else {cout << 0;}

        cout << ' ' << Max << '\n';

    }

}