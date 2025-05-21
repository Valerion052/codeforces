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

        int _max = 0, local_max = 0;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;

            if (num==0) {++local_max;}
            else {_max = max(_max, local_max); local_max=0;}
        }
        _max = max(_max, local_max);
        cout << _max << "\n";
    }
}