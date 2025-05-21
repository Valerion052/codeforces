#include <iostream>

using namespace std;


int main() {

    int N;
    int n[2001]{};
    int count = 0;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        n[num + 1000]++;
    }

    for (int j = 0; j < 2001; ++j) {
        if (n[j]>0) {
            count++;
        }
    }

    cout << count;
}