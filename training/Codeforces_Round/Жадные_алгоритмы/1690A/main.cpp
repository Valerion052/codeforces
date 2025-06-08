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
        
        int a=n/3;
        int b=n/3+1;
        int c=n/3-1;

        if (n%3==1) {++b;}
        if (n%3==2) {++a; ++b;}

        cout << a << ' ' << b << ' ' << c << "\n";

    }
}
