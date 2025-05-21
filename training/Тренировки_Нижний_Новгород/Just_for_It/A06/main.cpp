#include <iostream>

using namespace std;

int main() {
    int num;
    int count_0 = 0;
    int count_1= 0;
    int num_lag = -1;

    while (cin >> num) {
        if (num != num_lag) {
            if (num == 0) {
                count_0++;
            } else {
                count_1++;
                }
            }
        num_lag = num;
        }
    
    cout << count_1 << ' ' << count_0;

    return 0;
}