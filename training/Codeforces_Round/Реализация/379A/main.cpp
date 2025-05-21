#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int ans = a;
    int local = a;

    while (local/b>0) {
        ans+=local/b;
        local=local/b+local%b;
    }

    cout << ans;
}