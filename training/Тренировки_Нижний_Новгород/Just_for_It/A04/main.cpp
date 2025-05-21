#include <iostream>

using namespace std;


int main() {

    int N;
    int n[100];

    cin >> N;

    if (N == 1) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < N; ++i) {
        cin >> n[i];
    }

    int max_1 = n[0];
    int max_2 = -1;
    
    for (int i = 1; i < N; ++i) {

        if (n[i] >= max_1) {
            max_2 = max_1;
            max_1 = n[i];
        } else if (n[i] > max_2 && n[i] < max_1) {
            max_2 = n[i];
        }
    }

    if (max_2 == -1) {
        cout << max_1;
    } else {
        cout << max_2;
    }
    return 0;
}
