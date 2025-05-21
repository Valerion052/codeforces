#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    for (int i=1; i<n; ++i) {
        if (s[i-1]>s[i]) {
            cout << s.erase(i-1, 1);
            return 0;
        }
    }
    cout << s.erase(n-1, 1);
}

