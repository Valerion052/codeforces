#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    map<string, string> d;
    while (m--) {
        string a, b;
        cin >> a >> b;
        d[a]=a.size()<=b.size() ? a : b;
    }

    while (n--) {
        string c;
        cin >> c; cout << d[c] << ' ';
    }
}