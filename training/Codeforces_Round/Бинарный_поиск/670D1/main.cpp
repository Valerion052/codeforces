#include <iostream>
#include <vector>

using namespace std;

int n, k;

bool check(vector<int> a, vector<int> b, int c) {
    int _k=k;

    for (int i=0; i<a.size(); ++i) {
        int x = a[i]*c;
        _k -= max(x-b[i], 0);
        if (_k<0) {return 0;}
    }
    return k>=0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i=0; i<n; ++i) {cin >> a[i];}
    for (int i=0; i<n; ++i) {cin >> b[i];}

    int l=0, r=1e5, ans=0;
    while(l<=r) {
        int c=(l+r)/2;
        if (check(a, b, c)) {l=c+1; ans=c;}
        else {r=c-1;}
    }
    cout << ans;
}