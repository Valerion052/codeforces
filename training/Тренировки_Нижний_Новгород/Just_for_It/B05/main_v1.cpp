#include <iostream>

using namespace std;

int main() {

    string a, b;
    int N;

    cin >> a;
    cin >> b;

    N = a.size();

    for (int i=0; i<N; i++) {
        if (a[i] != b[i]) {
            cout <<1;
        } else {
            cout << 0;

        }
    }
    return 0;
}