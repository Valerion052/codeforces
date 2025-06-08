#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a, b;
        for (int i=1; i<=n; ++i) {
            if (i%2==0) {a.push_back(i);}
            else {b.push_back(i);}
        }
        *(b.end()-1)+=n/2;

        if (n%4==0) {
            cout << "YES\n";
            for (int x: a) {cout << x << ' ';}
            for (int x: b) {cout << x << ' ';}
            cout << "\n";
        }
        else {cout << "NO\n";}

    }
}
