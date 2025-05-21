#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<pair<long long, int>> &arr, int c) {

    long long value = arr[c].first;
    for (int i=c+1; i<arr.size(); ++i) {
        long long d = arr[i].first-arr[i-1].first;
        if (value>=d) {value+=d;}
        else {return 0;}
    }
    return 1;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<pair<long long, int>> p(n+1, {0, 0});
        for (int i=1; i<=n; ++i) {cin >> p[i].first; p[i].second=i;}
        sort(p.begin(), p.end());
        for (int j=2; j<=n; ++j) {p[j].first+=p[j-1].first;}

        int l=1, r=n, ans=1;
        while (l<=r) {
            int c=(l+r)/2;
            if (check(p, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << n-ans+1 << "\n";
        sort(p.begin()+ans, p.end(), [](pair<long long, int> x, pair<long long, int> y){return x.second<y.second;});
        for (int i=ans; i<=n; ++i) {cout << p[i].second << ' ';} cout << "\n";
    }   
}