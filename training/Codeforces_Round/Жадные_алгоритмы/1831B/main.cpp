#include <iostream>
#include <map>

using namespace std;

map<int, int> make_dict_counter(int arr[], int n) {
    map<int, int> ans;
    
    int count_local = 1;
    ans[arr[0]]=1;

    for (int i=1; i<n; ++i) {
        if (arr[i]==arr[i-1]) {
            ++count_local;
            ans[arr[i]] = max(ans[arr[i]], count_local);
        }
        else {
            count_local=1;
            if (!ans.count(arr[i])) {ans[arr[i]]=1;}
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr_a[n], arr_b[n];
        for (int i=0; i<n; ++i) {cin >> arr_a[i];}
        for (int j=0; j<n; ++j) {cin >> arr_b[j];}

        map<int, int> dict_a = make_dict_counter(arr_a, n);
        map<int, int> dict_b = make_dict_counter(arr_b, n);

        int ans = 0;
        for (auto x: dict_a) {
            int value_1 = x.second;
            if (dict_b.count(x.first)) {value_1+=dict_b[x.first];}
            ans = max(ans, value_1);
        }
        for (auto y: dict_b) {
            int value_2 = y.second;
            if (dict_a.count(y.first)) {value_2+=dict_a[y.first];}
            ans = max(ans, value_2);
        }

        cout << ans << "\n";
    }
}