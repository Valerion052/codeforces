#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    pair<int, int> arr[n];

    for (int i=0; i<n; ++i) {
        int x, y, k;
        cin >> x >> y >> k;

        arr[i].first = x*x+y*y;
        arr[i].second = k;
    }

    sort(arr, arr+n, [](pair<int, int> x, pair<int, int> y){return x.first<y.first;});

    int radius = 0;
    
    for (int j=0; j<n; ++j) {
        
        if (s >= 1000000) {break;}
        else {
            s += arr[j].second;
            radius = arr[j].first;
        }
    }

    if (s < 1000000) {cout << -1; return 0;}

    double l = 0, r = radius;

    while (r - l > 1e-7) {
        double c = (l+r)/2.0;
        double value = c*c;

        if (value < radius) {l = c;}
        else {r = c;}
    }

    printf("%.7f", l);

}