#include <iostream>

using namespace std;

bool check(int m, int k) {
    return ((long long)k*(k-1))/2 >= m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    cout << max(n-1-m, 0) << ' ';

    int ans = 0;
    int l=1, r=n;
    while (l<=r) {
        int c = (l+r)/2;
        if (check(m, c)) {r=c-1; ans = c;}
        else {l=c+1;}
    }

    cout << max(n-ans, 0);

}