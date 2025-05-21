#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans_1 = n*a;

    int c = n/m;
    int q = n-c*m;
    int ans_2 = c*b + q*a;

    int _c = n%m==0 ? n/m : n/m+1;
    int ans_3 = _c*b;
    
    cout << min(min(ans_1, ans_2), ans_3);
}