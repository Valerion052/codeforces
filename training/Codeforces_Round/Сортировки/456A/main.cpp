#include <iostream>
#include <algorithm>

using namespace std;

int f(pair<int, int> x, pair<int, int> y) {return x.first<y.first;};

int main() {
    int n;
    cin >> n;

    pair <int, int> arr[n];
    bool flag = false;

    for (int i=0; i<n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr+n, f);

    for (int j=1; j<n; ++j) {
        if(arr[j-1].second > arr[j].second) {flag = true; break;}
    }

    if (flag) {cout << "Happy Alex";} else {cout << "Poor Alex";}
}