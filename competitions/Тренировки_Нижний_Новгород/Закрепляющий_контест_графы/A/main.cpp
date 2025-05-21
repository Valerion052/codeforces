#include <iostream>

using namespace std;

bool check(int k, long long m) {
    long long value = ((long long)k*(k-1))/2;
    return value<m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long m;
    cin >> n >> m;

    if (m==0) {cout << n << ' ' << n;}
    else {
        int l=1, r=n, ans=0;
        while (l<=r) {
            int c=(l+r)/2;
            if (check(c, m)) {l=c+1;}
            else {r=c-1;}
        }
        
        int _max = n-l;
        int _min = max(0ll, n-2*m);
    
        cout << _min << ' ' << _max;
    }
}