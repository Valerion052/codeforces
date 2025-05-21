#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    if (x.second==y.second) {return x.first>y.first;}
    return x.second > y.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    pair<int, int> p[n];
    for (int i=0; i<n; ++i) {cin >> p[i].first >> p[i].second;}
    sort(p, p+n, f);

    int count=1;
    int ans=0;
    for (int j=0; j<n && count>0; ++j) {
        count+=p[j].second-1;
        ans+=p[j].first;
    }
    cout << ans;


}