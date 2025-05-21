#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n;

    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr.begin(), arr.end());

    cin >> q;

    for (int j=0; j<q; ++j) {
        int m;
        cin >> m;

        int l = 0, r = n-1;
        while (l<=r) {
            int c = (l+r)/2;
            if (arr[c] <= m) {l = c + 1;}
            else {r = c - 1; }
        }
        cout << l << '\n';
    }
}
