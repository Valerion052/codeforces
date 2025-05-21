#include <iostream>
#include <algorithm>
#include <map>

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
        map<int, int> d;
        for (int i=0; i<n; ++i) {cin >> arr[i];; ++d[arr[i]];}

        int it;
        for (auto [a, b]: d) {if (b==1) {it=a;}}

        cout << find(arr, arr+n, it) - arr + 1 << "\n";
    }

}