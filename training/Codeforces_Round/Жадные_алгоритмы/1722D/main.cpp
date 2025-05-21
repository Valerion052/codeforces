#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(pair<long long, long long> x, pair<long long, long long> y) {
    return abs(x.first-x.second) > abs(y.first-y.second);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<pair<long long, long long>> arr;
        long long sum = 0;

        for (int i=0; i<n; ++i) {
            int left = i;
            int right = n-1-i;
            if (s[i]=='L') {
                if (left<right) {arr.push_back({left, right});}
                sum+=left;
            }
            else {
                if (right<left) {arr.push_back({right, left});}
                sum+=right;
            }
        }

        sort(arr.begin(), arr.end(), f);

        arr.push_back({0, 0});
        int _n = arr.size();
        for (int j=1; j<_n; ++j) {
            arr[j].first += arr[j-1].first;
            arr[j].second += arr[j-1].second;
        }

        for (int k=0; k<n; ++k) {
            cout << sum-arr[min(k, _n-1)].first + arr[min(k, _n-1)].second << ' ';
        }
        cout << "\n";
    }
}