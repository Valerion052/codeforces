#include <iostream>

using namespace std;

int main() {

    int N;
    int n[1001]{};

    cin >> N;

    for (int i=0; i < N; i++) {
        int num;
        cin >> num;
        n[num]++;
    }

    for (int j=1000; j >= 0; j--) {
        for (int k=0; k<n[j]; k++) {
            cout << j << ' ';
        }
    }
    return 0;
}