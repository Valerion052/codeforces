#include <iostream>

using namespace std;

int main() {

    string a, b;
    int N;

    cin >> a;
    cin >> b;

    N = a.size();

    for (int i=0; i<N; i++) {
        char result_char = ((a[i] - '0')^(b[i] - '0')) + '0';
        cout << result_char;
    }
    return 0;
}