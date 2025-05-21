#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.size();

    string arr[size];
    int open_l = 0,  open_r = 0;
    int close_l = 0,  close_r = 0;
    int counter = 0;

    for (int i=0; i<size; ++i) {
        if (s[i] == '(') {++open_l;} else {++close_l;}

        if (open_l == close_l) {counter = max(counter, 2 * close_l);}
        else if (close_l > open_l) {open_l = close_l = 0;}
    }

    for (int j=size-1; j>=0; --j) {
        if (s[j] == ')') {++open_r;} else {++close_r;}

        if (open_r == close_r) {counter = max(counter, 2 * open_r);}
        else if (close_r > open_r) { open_r = close_r = 0;}
    }

    cout << counter;
}