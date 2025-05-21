#include <iostream>

using namespace std;

long long prefix_sum(long long c) {
    return c*(c+1)/2;
}

long long cheak_1(long long k, long long x) {
    long long l = 0, r = k, ans = 0;
    while (l<=r) {
        long long c = (l+r)/2;
        if (prefix_sum(c) >= x) {r=c-1; ans = c;}
        else {l=c+1;}
    }
    return ans;
}

long long cheak_2(long long k, long long x) {
    long long l = 0, r = k-1, ans = 0;
    long long value = prefix_sum(k-1);
    while (l<=r) {
        long long c = (l+r)/2;
        if (value - prefix_sum(c) >= x) {l=c+1; ans = 2*k-1-c;}
        else {r=c-1;}
    }
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long k, x;
        cin >> k >> x;

        long long top = prefix_sum(k);
        long long all_mes = 2*prefix_sum(k) - k;
        long long result;

        if (x>=all_mes) {result = 2*k-1;}
        else if (x<=top) {result = cheak_1(k, x);}
        else {result = cheak_2(k, x - top);}
        cout << result << '\n';
    }
}