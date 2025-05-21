#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    n%2==0 && n>2? cout << "YES" : cout << "NO";

}