#include <iostream>

using namespace std;


int main() {

    string s;
    cin >> s;
    s += '~';
    int N = s.size();

    int count = 1;
    char lag_value = s[0];
    
    for (int i=1; i < N; ++i) {

        if (s[i] == lag_value) {
            count++;
        } else {
            cout << lag_value;
            if (count > 1) {
                cout << count;
                }
            count = 1;
            lag_value = s[i];
        }
    }

    return 0;
}
