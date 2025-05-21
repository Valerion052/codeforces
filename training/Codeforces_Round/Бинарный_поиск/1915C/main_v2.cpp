#include <iostream>

using namespace std;

bool cheak(long long s) {
    long long l = 1, r = s;
    bool flag = false;
    while (l<=r) {
        long long c = (l+r)/2;
        if (s/c == c && s%c ==0) {flag = true; break;}
        else if (s/c > c) {l=c+1;}
        else {r = c-1;}
    }
    return flag;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i=0; i<n; ++i) {int num; cin >> num; sum += num;}

        if (cheak(sum)) {cout << "YES";} else {cout << "NO";}
        cout << '\n';
    }

}