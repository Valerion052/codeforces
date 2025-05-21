#include <iostream>

using namespace std;

int n, a, b;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> a >> b;

    int result = 0;

    for (int i=1; i<n; ++i) {
        int m = min(a/i, b/(n-i));
        result = max(result, m);
    }

    cout << result;
}