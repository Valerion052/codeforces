#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long index[m];
    long long arr[n], delta[n-1];

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    for (int j=0; j<m; ++j) {cin >> index[j];}


    for (int k=1; k<n; ++k) {delta[k-1] = arr[k] - arr[k-1];}
    sort(delta, delta+n-1);

    long long result = delta[0];
    if (n-1>1) {
        result = gcd(delta[1], delta[0]);
        for (int c=2; c<n-1; ++c) {
            long long value = gcd(delta[c], delta[c-1]);
            result = gcd(max(result, value), min(result, value));
        }
    }

    long long ind = -1;
    for (int x=0; x<m; ++x) {if (result%index[x]==0){ind=x+1; break;}}

    if (ind==-1) {cout << "NO";}
    else {cout << "YES\n" << arr[0] << ' ' << ind;}
}