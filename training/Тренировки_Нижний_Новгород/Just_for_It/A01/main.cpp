#include <iostream>

using namespace std;


int main() {

    int N;
    int n[100];

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> n[i];
    }
    
    for (int i = N - 1; i >= 0; i--) {
    cout << n[i] << ' ';
    }

    return 0;
}
