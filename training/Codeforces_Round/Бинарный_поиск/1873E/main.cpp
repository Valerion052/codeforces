#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<long long>& vec, long long x, long long k) {

    for (int i=0; i<vec.size(); ++i) {
        if (vec[i]<k) {x -= k-vec[i];}
        if (x < 0) {return false;}
    }
    return true;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> vec(n);
        long long max = 0;

        for (int i=0; i<n; ++i) {cin >> vec[i]; if (vec[i] > max) {max=vec[i];}}
        sort(vec.begin(), vec.end());

        long long l=0, r=max+x, ans=0;

        while (l<=r) {
            long long c = (l+r)/2;

            if (check(vec, x, c)) {l=c+1; ans = c;}
            else {r=c-1;}
        }
        cout << ans << '\n';
    }
}