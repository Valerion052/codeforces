#include <iostream>

using namespace std;


int main() {

    int N;
    int win = 0;
    int sum_i = 0;

    cin >> N;
    
    for (int i = 0; i < N; ++i) {

        int result;
        cin >> result;

        sum_i += result;

        if (result == 0) {
            sum_i = 0;
        } else if (sum_i > win) {
                win = sum_i;
            }
    }

    cout << win;

    return 0;
}
