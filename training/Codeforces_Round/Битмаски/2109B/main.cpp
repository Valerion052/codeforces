#include <iostream>

using namespace std;

int calculate(int x, int y) {
    int count=1;
    while (x>1) {x=x/2+(x%2); ++count;}
    while (y>1) {y=y/2+(y%2); ++count;}
    return count;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n, m, a, b; cin >> n >> m >> a >> b;
        
        int _n = min(a, n-a+1);
        int _m = min(b, m-b+1);


        int ans_1 = calculate(_n, m);
        int ans_2 = calculate(n, _m);
        cout << min(ans_1, ans_2) << "\n";
    }
}