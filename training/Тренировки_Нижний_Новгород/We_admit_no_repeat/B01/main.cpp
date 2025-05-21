#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    if (x.first > y.first) {return true;}
    else if (x.first == y.first) {
        if (x.second < y.second) {return true;}
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    pair<int, int> arr[n];
    for (int i=0; i<n; ++i) {
        int p, t;
        cin >> p >> t;
        arr[i].first = p;
        arr[i].second = t;
    }

    sort(arr, arr+n, f);
    pair<int, int> value = arr[k-1];
    int ans = count_if(arr, arr+n, [=](pair<int, int> p){return p.first == value.first && p.second == value.second;});
    
    cout << ans;
}