#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    if (x.second==y.second) {return x.first<y.first;}
    return x.second>y.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n]{};
    while (m--) {
        pair<int, int> p[n];
        for (int i=0; i<n; ++i) {cin >> p[i].second; p[i].first=i;}
        sort(p, p+n, f);
        ++arr[p[0].first];
    }

    int* it = max_element(arr, arr+n);
    cout << it - arr + 1;
}