#include <iostream>
#include <climits>
#include <unordered_map>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long arr[n];
    unordered_map<int, int> search;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        search[arr[i]] = i;
        }
    
    long long sum[n+1]{};
    for (int p=1; p<=n; ++p) {
        if (arr[p-1] < 0) {
            sum[p] = sum[p-1];
        }
        else {
            sum[p] = sum[p-1] + arr[p-1];
        }
        
    }

    int l = 0, r = 0;
    long long value = LLONG_MIN;
    for (int j=0; j<n; ++j) {
        if (search.find(arr[j]) != search.end()) {
            if (search[arr[j]] > j) {
                int l_local = j, r_local = search[arr[j]];
                long long value_local = sum[r_local] - sum[j+1] + arr[j]*2;
                    if (value_local > value) {
                        l = l_local,
                        r = r_local;
                        value = value_local;
                    }
            }
        }
    }

    int arr_drop[n]{};
    int counter = 0;
    long long sum_result = 0;

    for (int x=0; x<n; ++x) {
        if (x < l || x > r) {
            arr_drop[counter] = x;
            ++counter;
            }
        else if (x > l && x < r) {
            if (arr[x] >= 0) {sum_result += arr[x];}
            else {
                arr_drop[counter] = x;
                ++counter;
            }
        }
    }

    cout << sum_result + arr[l] + arr[r] << ' ' << counter << '\n';
    for (int y=0; y<counter; ++y) {cout << arr_drop[y]+1 << ' ';}
}