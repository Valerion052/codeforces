#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c_1 = n/3;
        int c_2 = (n-c_1)/2;

        if (n-(c_1+c_2*2)==1) {++c_1;}

        cout << c_1 << ' ' << c_2 << '\n';
    }
    
}