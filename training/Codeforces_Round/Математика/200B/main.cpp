#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 0;
    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        ans+=num;
    }

    cout << ans/n;
}