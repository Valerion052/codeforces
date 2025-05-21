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

        set<int> dict_0, dict_not_0;
        int ans = 0;

        for (int j=0; j<n-1; ++j) {
            int value_1 = dict_0.count(arr[j]) ? 0 : arr[j];
            int value_2 = dict_0.count(arr[j+1]) ? 0 : arr[j+1];
            
            if (value_1 > value_2) {
                if (!dict_not_0.count(value_1)) {++ans;}
                ans+=dict_not_0.size();
                dict_0.insert(value_1);
                dict_0.insert(dict_not_0.begin(), dict_not_0.end());
                dict_not_0.clear();
            }
            else {
                if (value_1!=0 && !dict_0.count(value_1)) {
                    dict_not_0.insert(value_1);
                }
            }
        }

        cout << ans << "\n";

    }
}