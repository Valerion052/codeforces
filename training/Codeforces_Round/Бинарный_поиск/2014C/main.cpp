#include <iostream>
#include <algorithm>

using namespace std;

bool check(int arr[], int n, long long sum, int max, long long k) {
    double mean = ((sum+k)/(double)n)/2;
    arr[n-1]+=max;
    auto first = lower_bound(arr, arr+n, mean);
    int ans = distance(arr, first);
    return ans>n/2;
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

        int arr[n];
        long long sum = 0;
        int _max = 0;
        for (int i=0; i<n; ++i) {cin>>arr[i]; sum+=arr[i]; _max=max(_max, arr[i]);}
        sort(arr, arr+n);

        long long l=0, r = 2*n*(long long)_max-sum+1, ans=-1;

        while (l<=r) {
            long long c = (l+r)/2;
            if (check(arr, n, sum, _max, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << ans << "\n";
    }
}