#include <iostream>
#include <map>

using namespace std;

int n;
const long long LONG=1e18;

int calculate(int k) {
    int count=0;
    while (k>0) {++count; k/=10;}
    return count;
}

long long sol(int p) {
    int total = 1 << p;
    int mask=1;
    long long ans=LONG;
    map<int, int> d = {{1, 4}, {0, 7}};

    for (int i=0; i<total; ++i) {
        long long v=0;
        map<int, int> check = {{4, 0}, {7, 0}};
        for (int j=0; j<p; ++j) {
            int _v = d[(i>>j)&mask];
            v = v*10+_v;
            ++check[_v];
        }
        if (check[4]==check[7]) {if (v>=n) {ans=min(ans, v);}}
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int _n = calculate(n);
    if (_n%2!=0) {++_n;}

    long long ans = sol(_n);
    if (ans==LONG) {ans = sol(_n+2);}
    
    cout << ans;
}