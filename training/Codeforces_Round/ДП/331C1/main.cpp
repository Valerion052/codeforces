#include <iostream>

using namespace std;

int find_max(int k) {
    int ans = 0;
    while (k>0) {
        ans = max(ans, k%10);
        k/=10;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int ans=0;

    while (n>0) {
        ++ans;
        n-=find_max(n);
    }

    cout << ans;
}