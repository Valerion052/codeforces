#include <iostream>

using namespace std;

int main() {
    int t;
    cin >>t;

    while (t--) {
        int n;
        cin >> n;

        int even = 0, odd = 0;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            if (num%2 == 0) {even += num;} else {odd += num;}
        }

        if (even > odd) {cout << "YES";} else {cout << "NO";}
        cout << endl;
    }
}