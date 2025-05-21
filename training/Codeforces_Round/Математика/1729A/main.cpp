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

        if (a-1<abs(b-c)+(c-1)) {cout << 1;}
        else if (a-1>abs(b-c)+(c-1)) {cout << 2;}
        else {cout << 3;}
        cout << "\n";
    }
}
