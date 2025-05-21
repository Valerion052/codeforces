#include <iostream>
#include <vector>

using namespace std;

int calculate_iter(int n) {
    int ans=0;
    while (n>0) {++ans; n/=10;}
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int _n=calculate_iter(n);
    int d[2];
    d[0]=7; d[1]=4;
    int ans=0;


    for (int i=1; i<=_n; ++i) {
        int k=1;
        int total=(1<<i);
        int mask=1;
        for (int j=0; j<total; ++j) {
            long long v=0;
            for (int p=0; p<i; ++p) {v=v*10+d[(j>>p)&mask];}
            if (v<=n) {++ans;}
        }
    }
    cout << ans;
}