#include <iostream>

using namespace std;

int main () {
    string s;
    int result = 0;
    int counter = 0;
    cin >> s;
    s += '#';
    
    for (int i=0; i<s.size(); ++i) {
        if (counter == 6) {++result; counter = 0;}
        if (s[i] == '=') {++counter;} else {counter = 0;}

    }

    cout << result;
}