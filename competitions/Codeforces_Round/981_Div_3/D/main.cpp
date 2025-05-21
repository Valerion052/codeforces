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

        map<long long, int> map_index;
        map_index[0] = -1;
        
        int result = 0, index_lag = -1, sum = 0;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            sum += num;

            if (map_index.count(sum) && map_index[sum] >= index_lag) {
                index_lag = i;
                ++result;
            }
            map_index[sum] = i;
        }
    cout << result << '\n';
    }
}