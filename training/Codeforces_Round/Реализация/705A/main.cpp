#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i%2!=0) {cout << "I hate";}
        else {cout << "I love";}
        if (i<n) {cout << " that ";} else {cout << " it";}
    }
}