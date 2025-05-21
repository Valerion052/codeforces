#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) {return a;}
    return gcd(b, a%b);
}

int main() {
    int n;
    cin >> n;

    long long arr[n], sum[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    sum[0] = arr[0];
    for (int j=1; j<n; ++j) {sum[j]=sum[j-1]+arr[j];}

    long long delta = 0;
    for (int j=1; j<n; ++j) {delta += arr[j]*j - sum[j-1];}

    delta = delta*2+sum[n-1];
    long long _gcd = gcd(delta, (long long)n);

    cout << delta/_gcd << ' ' << n/_gcd;
}