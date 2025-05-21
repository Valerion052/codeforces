#include <iostream>

using namespace std;

long long get(long long arr[], long long l, long long r) {

    if (l>0) {
        return arr[r] - arr[l-1];
    } else {
        return arr[r];
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long s[n];
    long long sum = 0;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        sum += num;
        s[i] = sum;
    }

    while (m--) {
        long long l, r;
        cin >> l >> r;
        cout << get(s, l-1, r-1) << '\n';
    }  
}
