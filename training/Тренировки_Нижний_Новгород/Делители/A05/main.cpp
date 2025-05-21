#include <iostream>
#include <map>

using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    map<int, int> dict;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        ++dict[num];
    }

    long long ans = 1;
    for (auto x: dict) {ans = ans * (x.second + 1) % MOD;}

    cout << ans;
}