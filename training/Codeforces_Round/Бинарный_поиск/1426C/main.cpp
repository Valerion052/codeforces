// 7   [6]
// 7   [7]
// 7   [8]
// 7   [9]
// 7   [10]
// 7   [11]

// 7   [6]
// 7   [7]
// 7   [8]
// 7   [9]
// 7   [10]
// 7   [11]






#include <iostream>

using namespace std;

bool check(int n, int k) {
    int value = k/2;
    return (long long)(value+1)*(k-value+1) >= n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int l=0, r = n, ans=0;
        while (l<=r) {
            int c = (l+r)/2;
            if (check(n, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << ans << "\n";
    }
}