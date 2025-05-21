#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans=1, value = 1;
    for (int i=1; i<n; ++i) {value += 2; ans+=value;}
    cout << ans*2-value;

}