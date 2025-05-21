#include <iostream>
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

        pair<int, int> p[n];
        for (int i=0; i<n; ++i) {
            int a;
            cin >> a;
            p[i].first = a;
        }
        for (int j=0; j<n; ++j) {
            int b;
            cin >> b;
            p[j].second = b;
        }

        int last_value;
        cin >> last_value;

        long long ans = 1;
        int _min_last_value = 1e9;
        
        for (int k=0; k<n; ++k) {
            ans+=abs(p[k].first-p[k].second);

            if (
                last_value >= min(p[k].first, p[k].second)
                &&
                last_value<=max(p[k].first, p[k].second)
            ) {_min_last_value=0;}

            _min_last_value = min(_min_last_value, abs(p[k].first-last_value));
            _min_last_value = min(_min_last_value, abs(p[k].second-last_value));
        }

        cout << ans + _min_last_value << "\n";
    }
}