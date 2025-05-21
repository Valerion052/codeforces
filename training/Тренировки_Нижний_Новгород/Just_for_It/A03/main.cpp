#include <iostream>

using namespace std;


int main() {

    int N;
    int n[100];

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> n[i];
    }

    int max = n[0];
    int n_max = 1;
    
    for (int i = 1; i < N; ++i) {

        if (n[i] > max) {
            max = n[i];
            n_max = 0;
        }
        if (n[i] == max) {
            n_max++;
        }
    }

    cout << max << ' ' << n_max;

    return 0;
}
