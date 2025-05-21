#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

bool cheak (long long k, vector<long long> arr) {

    long long sum = 0;
    for (int i=0; i<n; ++i) {sum += k - arr[i];}
    return sum >= k;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    vector<long long> arr(n);
    long long l = 0, r = 0;
    for(int i=0; i<n; ++i) {cin >> arr[i]; r += arr[i]; if (arr[i]>l) {l = arr[i];}}

    while (l<r) {
        long long c = (l+r)/2;
        if (cheak(c, arr)) {r = c;}
        else {l=c+1;}
    }
    cout << r;
}