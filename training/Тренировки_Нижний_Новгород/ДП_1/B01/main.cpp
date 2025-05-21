#include <iostream>
#include <vector>

using namespace std;

const int N = 100001;
vector<vector<int>> d(N);
int dict[N]{};

void sieve(int n) {
    for (int i=2; i<=n; ++i) {
        if (d[i].empty()) {
            for (int j=i; j<=n; j+=i) {
                d[j].push_back(i);
            }
        }
    }
}

int find_max(vector<int> arr) {
    int ans = 0;
    for (auto x: arr) {ans=max(ans, dict[x]);}
    ++ans;
    for (auto y: arr) {dict[y]=ans;}
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sieve(arr[n-1]);

    int ans = 0;
    for (int j=0; j<n; ++j) {
        int _max = find_max(d[arr[j]]);
        ans = max(ans, _max);
    }

    cout << ans;
}