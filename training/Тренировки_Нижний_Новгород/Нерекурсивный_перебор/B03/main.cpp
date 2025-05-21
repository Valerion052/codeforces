#include <iostream>

using namespace std;

int calculate(int k) {
    int count=0;
    while (k>0) {++count; k/=10;}
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int _n = calculate(n);
    int total = (1<<_n);
    int mask=1;
    int ans=0;

    for (int i=0; i<total; ++i) {
        int v = 0;
        for (int j=0; j<_n; ++j) {
            v = v*10 + ((i>>j) & mask);
        }
        if (v>0 && v<=n) {++ans;}
    }
    cout << ans;

}