#include <iostream>
#include <vector>
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

        vector<int> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr.begin(), arr.end());

        int result = arr.back() - arr.front();

        for (int j=1; j<n; ++j) {if (arr[j] - arr[j-1] < result) {result = arr[j] - arr[j-1];}}

        cout << result << '\n';
    }
}