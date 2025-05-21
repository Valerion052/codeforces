#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;

double cheak(double c, vector<int> arr) {
    double sum = 0;
    for (int i=0; i<n; ++i) {
        if (arr[i]<c) {sum -= (c - arr[i])/(1-k/100.0);}
        else {sum += arr[i] - c;}
    }
    return sum;
}

int main() {
    cin >> n >> k;

    vector<int> arr(n);

    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr.begin(), arr.end());

    double l = arr[0], r = arr[n-1];

    while (l<=r) {
        double c = (l+r)/2.0;
        double value = cheak(c, arr);

        if (abs(value) <= 1e-07) {printf("%.6f", c); return 0;}
        else if (value > 0) {l = c;}
        else {r=c;}
    }
} 