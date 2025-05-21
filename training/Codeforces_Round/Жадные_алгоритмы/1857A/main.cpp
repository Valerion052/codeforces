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

        int odd=0;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            if (num%2!=0) {++odd;}
        }

        if (odd%2==0) {cout << "YES\n";}
        else {cout << "NO\n";}

    }
}