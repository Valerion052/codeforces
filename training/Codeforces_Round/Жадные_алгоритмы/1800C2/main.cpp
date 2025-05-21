#include <iostream>
#include <set>

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

        long long ans=0;
        multiset<int> d;
        for (int j=0; j<n; ++j) {
            if (arr[j]==0) {
                if (d.empty()) {continue;}
                auto _max = d.end();
                --_max;
                ans+=*_max;
                d.erase(_max);
            }
            else {d.insert(arr[j]);}
        }
        cout << ans << "\n";
    }
}