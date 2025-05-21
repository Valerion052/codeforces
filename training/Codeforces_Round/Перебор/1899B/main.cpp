#include <iostream>
#include <vector>

using namespace std;

const int N = 150001;
vector<vector<int>> d(N);

void sieve() {
    for (int i=2; i<N; ++i) {
        for (int j=i; j<N; j+=i) {d[j].push_back(i);}
        d[i].push_back(1);
    } 
}

long long calcilate(vector<long long> &arr, int k) {

    long long _min=1e15, _max=0;
    for (int i=k; i<arr.size(); i+=k) {
        _min=min(_min, arr[i]-arr[i-k]);
        _max=max(_max, arr[i]-arr[i-k]);
    }
    return _max-_min;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n+1, 0ll);
        for (int i=1; i<=n; ++i) {cin >> arr[i]; arr[i]+=arr[i-1];}

        long long ans=0;
        for (int x: d[n]) {
            ans = max(ans, calcilate(arr, x));
        }
        cout << ans << "\n";
    }
}