#include <iostream>

using namespace std;

bool check(long long x, int k) {
    return (long long)k*k*k<=x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool flag = false;

        for (int a=1; a<=10000; ++a) {
            
            long long b = x - (long long)a*a*a;
            if (b<=0) {break;}
            else {
                int l=1, r=10000, ans = 0;
                while (l<=r) {
                    int c = (l+r)/2;
                    if (check (b, c)) {l=c+1; ans=c;}
                    else {r=c-1;}
                }
                if ((long long)ans*ans*ans == b) {flag=true; break;}
            }
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}