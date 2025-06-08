#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long arr[n];
        long long sum=0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; sum+=arr[i];}

        bool flag=1;
        long long count=0;
        for (int i=0; i<n && flag; ++i) {
            count+=max(arr[i]-sum/n, 0ll);
            count+=min(arr[i]-sum/n, 0ll);
            if (count<0) {flag=0;}
        }
        if (count!=0) {flag=0;}
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}
