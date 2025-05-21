#include <iostream>

using namespace std;

int main() {
    string s;
    int open = 0, close = 0, counter = 0;

    cin >> s;

    for (int i=0; i<s.size(); ++i) {
        if (s[i] == '(') {++open;}
        else {
            if (open > 0) {
                --open;
                counter += 2;
            }
        }
    }

    cout << counter;

}