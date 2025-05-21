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
        string s;
        cin >> n >> s;

        auto it_1 = s.find('1');
        auto it_0 = s.rfind('0');

        if (it_1 == string::npos || it_0 == string::npos || it_1>it_0 || n==1) {cout << s;}
        else {
            cout << s.substr(0, it_1);
            cout << s.substr(it_0, n-it_0);
        }
        cout << '\n';
    }
}