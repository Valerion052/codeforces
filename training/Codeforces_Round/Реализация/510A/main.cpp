#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    bool flag = true;

    for (int i=1; i<=n; ++i) {
        if (i%2!=0) {
            for (int j=0; j<m; ++j) {cout << '#';}
            cout << "\n";
        }
        else {
            if (flag) {
                for (int k=0; k<m-1; ++k) {cout << '.';}
                cout << "#\n";
                flag = 0;
            }
            else {
                cout << "#";
                for (int x=0; x<m-1; ++x) {cout << '.';}
                cout << "\n";
                flag = 1;
            }
        }
    }

}