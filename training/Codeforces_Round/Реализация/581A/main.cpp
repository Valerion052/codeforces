#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << ' ' << (max(a, b) - min(a, b))/2;
}