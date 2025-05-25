#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long x;
    cin >> n >> x;
    int ans_2=0;
    for (int i=0; i<n; ++i) {
        char c;
        long long d;
        cin >> c >> d;
        if (c=='+') {x+=d;}
        else {
            if (d>x) {++ans_2;}
            else {x-=d;}
        }
    }
    cout << x << ' ' << ans_2;
}