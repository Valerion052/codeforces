#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int result = 0;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        if (num <=5-k) {++result;}
    }

    cout << result/3;

}