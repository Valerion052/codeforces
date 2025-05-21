#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q; cin >> n >> q;

    vector<long long> a(n), b(q);
    for (int i=0; i<n; ++i) {
        int num; cin >> num;
        if (i==0) {a[i]=num;} else {a[i]=a[i-1]+num;}
    }
    for (int i=0; i<q; ++i) {cin >> b[i];}

    long long value=0;
    for (int j=0; j<q; ++j) {
        value+=b[j];
        int it = upper_bound(a.begin(), a.end(), value) - a.begin();
        if (it==n) {it=0; value=0;}
        cout << n-it << "\n";
    }
}