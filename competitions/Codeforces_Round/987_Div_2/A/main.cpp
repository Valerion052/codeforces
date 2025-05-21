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

        int counter = 0, local_couner = 1;



        for (int j=1; j<n; ++j) {
            if (arr[j]!=arr[j-1]) {
                counter = max(counter, local_couner);
                local_couner = 0;
            }
            ++local_couner;;
        }
        counter = max(counter, local_couner);

        if (counter == 0) {cout << counter;}
        else {cout << n - counter ;}
        cout << '\n';

        // cout << counter;

    }

}