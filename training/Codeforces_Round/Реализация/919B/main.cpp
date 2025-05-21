#include <iostream>

using namespace std;

bool check (int n) {
    int ans=0;
    while (n>0) {
        ans+=n%10;
        n/=10;
    }
    return ans==10;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;

    int ans = 19;
    int it=1;

    while (it!=k) {
        ans+=9;
        if (check(ans)) {++it;}
    }
    cout << ans;
}