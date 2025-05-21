#include <iostream>

using namespace std;

bool check(int s, int i, int exp, int e) {
    return s+e>i+exp-e;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int _str, _int, _exp;
        cin >> _str >> _int >> _exp;

        if (_str+_exp<=_int) {cout << 0 << '\n'; continue;}

        int l=0, r=_exp;
        while (l<=r) {
            int c = (l+r)/2;
            if (check(_str, _int, _exp, c)) {r=c-1;}
            else {l=c+1;}
        }
        cout << _exp - r << '\n';
    }
}

