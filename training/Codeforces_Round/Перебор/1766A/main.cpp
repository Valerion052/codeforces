#include <iostream>

using namespace std;

int value(int k) {
    int ans=0;
    while (k>0) {ans=k%10; k/=10;}
    return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int ans=0;
        for (int i=1; i<10; ++i) {
            int k=i;
            while (k<=n) {++ans; k*=10;}
        }
        cout << ans << "\n";
    }
}