#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        long long arr[300001]{};
        pair<int, int> p[n];

        for (int i=0; i<n; ++i) {cin >> p[i].second;}
        for (int j=0; j<n; ++j) {cin >> p[j].first;}
        for (int k=0; k<n; ++k) {arr[abs(p[k].first)]+=p[k].second;}
        for (int c=1; c<=n; ++c) {arr[c]+=arr[c-1];}

        bool flag = 1;
        for (int d=1; d<=n && flag; ++d) {
            if ((long long)d*k < arr[d]) {flag=0;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}