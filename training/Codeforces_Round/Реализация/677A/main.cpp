#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int ans = 0;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        num>t ? ans+=2 : ++ans;
    }

    cout << ans;
}