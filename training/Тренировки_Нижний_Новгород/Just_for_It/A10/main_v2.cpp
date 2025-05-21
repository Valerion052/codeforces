#include <iostream>

using namespace std;


int main() {

    int N;
    bool n[2001]{false};
    int count = 0;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        n[num + 1000] = true;
    }

    for (int j = 0; j < 2001; ++j) {
        if (n[j]) {
            ++count;
        }
    }

    cout << count;
}