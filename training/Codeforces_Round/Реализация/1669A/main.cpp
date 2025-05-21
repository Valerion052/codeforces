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

        if (n>=1900) {cout << "Division 1\n";}
        else if (n>=1600)  {cout << "Division 2\n";}
        else if (n>=1400)  {cout << "Division 3\n";}
        else {cout << "Division 4\n";}
    }
}