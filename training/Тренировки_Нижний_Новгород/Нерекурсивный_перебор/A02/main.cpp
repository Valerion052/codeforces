#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int k=1;
    int mask=1;
    int total = 1 << n;

    for (int i=0; i<total; ++i) {
        string s = "\n";
        for (int j=0; j<n; ++j) {
            s = to_string((i >> j) & mask) + " " + s;
        }
        cout << s;
    }
}