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
    int min = n[0];
    
    for (int i = 0; i < N; ++i) {

        if (n[i] < min) {
            min = n[i];
        }
        if (n[i] > max) {
            max = n[i];
        }
    }

    cout << min << ' ' << max;

    return 0;
}
