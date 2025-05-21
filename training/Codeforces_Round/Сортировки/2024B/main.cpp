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
        int n, k;
        cin >> n >> k;

        map<int, int> dict;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            ++dict[num];
        }

        long long pref_v = 0, pref_i = 0, sum_v = 0, sum_i = 0;

        for (auto d: dict) {
            long long v = d.first - pref_v;
            if (v>=0) {
                if (v>0) {
                    sum_v += v*(n-pref_i);
                    sum_i += v*(n-pref_i);
                    if (sum_v>=k) {break;}
                }
                sum_v += (n-pref_i-d.second);
                sum_i += (n-pref_i);
                pref_v +=(v+1);
                pref_i += d.second;
                if (sum_v>=k) {break;}
            }
        }

        cout << sum_i - (sum_v-k) << "\n";
    }
}