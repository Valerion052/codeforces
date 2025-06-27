#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b==0) {return a;}
    return gcd(b, a%b);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y, w; cin >> y >> w;
    int v = 7-max(y, w);
    int d = gcd(6, v);
    cout << v/d << '/' << 6/d;

}