#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, n;
    cin >> s >> n;

    pair<int, int> p[n];
    for (int i=0; i<n; ++i) {cin >> p[i].first >> p[i].second;}

    sort(p, p+n, [](pair<int, int> x, pair<int, int> y) {return x.first<y.first;});

    bool flag=1;
    for (int j=0; j<n && flag; ++j) {if (s>p[j].first) {s+=p[j].second;} else {flag=0;}}

    if (flag) {cout << "YES";} else {cout << "NO";}
}