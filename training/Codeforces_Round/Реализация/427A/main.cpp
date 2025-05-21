#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    int count = 0;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;

        ans -= min(count+num, 0);

        count += max(0, num);
        count = max(0, count+min(0, num));
    }

    cout << ans;

}