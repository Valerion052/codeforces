#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        map<int, int> d;
        int a, b, c; cin >> a >> b >> c;
        ++d[a]; ++d[b]; ++d[c];

        if (d[a]==1) {cout << a;}
        else if (d[b]==1) {cout << b;}
        else {cout << c;}
        cout << "\n";
    }
}

    