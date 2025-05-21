#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    string s;

    cin >> N;
    cin >> s;

    s += '#';

    int n[100]{};
    int k=0;
    int count = 0;

    for (int i = 0; i < N+1; i++) {
        if (s[i] == 'B') {
            count++;
        } else {
            if (count > 0) {
                n[k++] = count;
                count = 0;
            }
        }
    }

    // if (count > 0) {
    //     n[k++] = count;
    // }

    cout << k << endl;

    for (int j = 0; j < k; j++) {
        cout << n[j] << ' ';
    }

    return 0;
}