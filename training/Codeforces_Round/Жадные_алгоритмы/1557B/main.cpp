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

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, long long>> vec;
        for (int i=0; i<n; ++i) {int num; cin >> num; vec.push_back({i, num});}
        sort(vec.begin(), vec.end(), [](pair<int, long long> x, pair<int, long long> y){return x.second < y.second;});

        int counter = 1;

        for(int j=0; j<n-1; ++j) {
            if (vec[j+1].first - vec[j].first != 1) {++counter;}
        }

        if (k>=counter) {cout << "YES";} else {cout << "NO";}

        cout << '\n';

    }
}