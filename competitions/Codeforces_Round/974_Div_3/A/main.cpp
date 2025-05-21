#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {

        int n, k;
        int gold = 0;
        int result = 0;

        cin >> n >> k;

        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;

            if (a >= k) {
                gold += a;
                } else if (a==0 && gold>0) {
                    gold--;
                    result++;
                }
            }
        cout << result << '\n';
        }

    return 0;
}
