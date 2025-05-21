#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    string s;

    cin >> N;
    cin >> s;

    int n[N+1]{};
    char k_lag = '#';
    int sum_k = 0;

    for (int i = 0; i < N; i++) {
        if (s[i] == 'B') {
            if (s[i] != k_lag) {
                sum_k++;
            }
            n[i]++;
        }
        k_lag = s[i];
    }

    cout << sum_k;

    if (sum_k == 0) {
        return 0;
    } else {
        cout << '\n';
    }

    int k_sum = 0;
    int i_lag = 0;

    for (int j = 0; j < N+1; j++) {
        if (n[j] == 0 && k_sum != 0) {
            cout << k_sum << ' ';
            k_sum = 0;
        } else if (n[j] == 1) {
            k_sum++;
        }
        i_lag = n[j];
    }

    return 0;
}