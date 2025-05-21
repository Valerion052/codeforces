#include <iostream>

using namespace std;

bool check(int n, int k) {
    long long value = 0;
    for (int i=1; i<=k; ++i) {value+=((long long)i*(i+1))/2;}
    return value<=n; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int l=1, r=n, ans=0;
    while (l<=r) {
        int c=(l+r)/2;
        if (check(n, c)) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    cout << ans;
}