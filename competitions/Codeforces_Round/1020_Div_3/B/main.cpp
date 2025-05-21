#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        iota(arr.begin(), arr.end(), 0);
        
        auto it = find(arr.begin(), arr.end(), x);
        
        if (it!=arr.end()) {
            int value = *it;
            arr.erase(it); arr.push_back(value);
        }

        for (int i: arr) {cout << i << ' ';} cout << "\n";
    }
}