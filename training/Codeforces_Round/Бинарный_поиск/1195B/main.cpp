#include <iostream>
#include <numeric>

using namespace std;

int n, k;

bool check(int x) {
    return (long long)x*(x+1)/2-(n-x) <= k;
}

int main() {
    cin >> n >> k;

    int l = 1, r=n, ans=0;
    while (l<=r) {
        int c = (l+r)/2;
        if (check(c)) {l=c+1; ans = n-c;}
        else {r=c-1;}
    }
    cout << ans;
}