#include <iostream>

using namespace std;


long long triangle(long long k) {return k*(k+1)/2;}


bool cheak_triangle(int x) {

    long long l = 0, r = x, ans = 0;

    while (l<=r) {
        long long c = (l+r)/2;
        long long value = triangle(c);

        if (value <= x) {l = c + 1; ans = c;}
        else {r = c - 1;}
    }
    return triangle(ans) == x;
}


int main() {
    int n;
    cin >> n;

    bool flag = false;

    for (int i=1; i<n/2+1; ++i) {
        long long k = triangle(i);
        if (n-k >0) {
            long long cheak = cheak_triangle(n-k);
            if (cheak) {flag = true; break;}
        }
        else {break;}
    }

    if (flag) {cout << "YES";} else {cout << "NO";}

}