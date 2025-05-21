#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int ans = 0;
        for (int i=0; i<2*n; ++i) {
            int num;
            cin >> num;
            if (num%2!=0) {++ans;}
        }

        if (ans==n) {cout << "Yes\n";} else {cout << "No\n";}
    }
}