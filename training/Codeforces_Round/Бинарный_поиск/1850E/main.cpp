#include <iostream>
#include <vector>

using namespace std;

bool check(vector<long long> &arr, long long w, long long c) {
    long long k=0;
    for (long long x: arr) {
        k+=(x+(2*w))*(x+(2*w));
        if (k>c) {return 0;}
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        long long l=0, r=1e9, ans=0;
        while (l<=r) {
            long long w = (l+r)/2;
            if (check(arr, w, c)) {l=w+1; ans=w;}
            else {r=w-1;}
        }
        cout << ans << "\n";
    }
}