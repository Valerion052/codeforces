#include <iostream>
#include <algorithm>
#include <vector>

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

        vector<long long> arr;
        long long value=0;
        for (int i=0; i<n; ++i) {
            long long num; cin >> num;
            if (num%2==0) {arr.push_back(num);}
            else {value=max(value, num);}
        }
        sort(arr.begin(), arr.end());
        
        long long ans= value!=0 ? arr.size() : 0;
        for (int j=0; j<arr.size() && value!=0; ++j) {
            if (arr[j]>value) {++ans; break;}
            value+=arr[j];
        }
        cout << ans << "\n";
    }
}