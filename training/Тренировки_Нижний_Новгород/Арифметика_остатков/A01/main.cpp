#include <iostream>

using namespace std;

int main() {
    string n;
    int m;
    cin >> n >> m;

    long long ans = 0;

    for (int i=0; i<n.size(); ++i) {
        ans = (ans*10 + (n[i] - '0'))%m;
    }

    cout << ans;
}