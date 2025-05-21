#include <iostream>

using namespace std;

bool check(int n, int a, int b, int c, int k) {
    long long ans = k/3*(long long)(a+b+c);
    if (k%3==1) {ans+=a;}
    else if (k%3==2) {ans+=a+b;}
    return ans < n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int l = 1, r = n, ans = 1;
        while (l<=r) {
            int k = (l+r)/2;
            if (check(n, a, b, c, k)) {l=k+1;}
            else {r=k-1;  ans=k;}
        }
        cout << ans << "\n";
    }
}