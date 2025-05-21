#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    long long A, B;
    cin >> n >> k >> A >> B;

    if (k==1) {cout << (n-1)*A; return 0;}
    long long ans = n%k*A; n-=n%k;
    while (n>=k) {
        ans+=n%k*A; n-=n%k;
        long long value=n/k;
        long long a=(n-value)*A;
        ans+=min(B, a);
        n=value;
    }
    ans+=(n-1)*A;
    cout << ans;
}