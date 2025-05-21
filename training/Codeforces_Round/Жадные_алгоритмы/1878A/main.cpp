#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        bool flag = false;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            if (num == k) {flag = true;}           
        }

        if (flag) {cout << "YES";} else {cout << "NO";}
        cout << endl;
    }
}