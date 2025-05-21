#include <iostream>

using namespace std;

int n, a, b;

bool check(int k) {

    int value_a = min(n-1, a/k);
    int value_b = max(1, n-b/k);
    return value_b <= value_a;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> a >> b;

    int l = 1, r = max(a, b), ans = 0;

    while(l<=r) {
        int c = (l+r)/2;
        if (check(c)) {l = c+1; ans = c;}
        else {r=c-1;}
    }

    cout << ans;
}