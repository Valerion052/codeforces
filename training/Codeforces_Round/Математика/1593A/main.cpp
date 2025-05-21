#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int _max = max(max(a, b), c);
        cout << (_max-a) + (a<=max(b, c) ? 1 : 0) << ' ';
        cout << (_max-b) + (b<=max(a, c) ? 1 : 0) << ' ';
        cout << (_max-c) + (c<=max(a, b) ? 1 : 0) << "\n";
    }
}
