#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    bool dict[1001]{};
    for (int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        dict[a] = dict[b] = 1;
    }

    int top;
    for (int j=1; j<1001; ++j) {
        if (!dict[j]) {top=j; break;}
    }

    cout << n-1 << "\n";
    
    for (int k=1; k<=n; ++k) {
        if (k!=top) {cout << top << ' ' << k << "\n";}
    }
}