#include <iostream>

using namespace std;

int main () {
    int n;
    string s;

    cin >> n >> s;

    int counter = 0;
    int local_counter = 0;

    for (int i=0; i<n; ++i) {
        if (s[i]=='x') {
            ++local_counter;
            if (local_counter>2) {++counter;}
        }
        else {local_counter=0;}
    }

    cout << counter;
}