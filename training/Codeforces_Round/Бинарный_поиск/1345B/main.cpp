#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    vector<long long> d;
    long long v = 0;
    int it=1;
    while (1) {
        v+=it*2+it-1;
        if (v<=1e9) {d.push_back(v);}
        else {break;}
    ++it;
    }

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;
        while (n>1) {
            auto x = lower_bound(d.begin(), d.end(), n);
            if (*x!=n) {--x;}
            n-=*x;
            ++ans;
        }
        cout << ans << "\n";
    }
}

