#include <iostream>

using namespace std;

int a, b, c;

bool check(int k) {

    int all_time = (c * a + b - 1)/b;
    return all_time * b >= (all_time - k)*a;
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;

    int l = 0, r = (a*c)/b+1, ans = r;

    while (l<=r) {
        int c = (l+r)/2;
        if (check(c)) {r=c-1; ans = c;}
        else {l=c+1;}
    }

    cout << ans;

}