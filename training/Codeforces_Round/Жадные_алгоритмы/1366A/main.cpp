#include <iostream>

using namespace std;

bool check(int c, int k) {return 2*c<=k;}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << min(min(a, b), (a+b)/3) << "\n";
    }
}