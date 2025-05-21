#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        if (n<=2) {cout << 1;}
        else {cout << (n-2)/x + ((n-2)%x!=0 ? 1 : 0) + 1;}
        cout << "\n";
        
    }
}