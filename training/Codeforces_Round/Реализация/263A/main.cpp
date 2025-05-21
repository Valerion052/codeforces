#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int row, columns;

    for (int i=1; i<=5; ++i) {
        for (int j=1; j<=5; ++j) {
            int num;
            cin >> num;
            if (num==1) {row = i, columns = j;}
        }
    }

    cout << max(3, row) - min(3, row) + max(3, columns) - min(3, columns);
}