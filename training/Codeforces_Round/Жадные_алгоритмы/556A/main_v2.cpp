#include <iostream>

using namespace std;

int main () {
    int n;
    string s;
    cin >> n >> s;

    int couner_0 = 0, couner_1 = 0;

    for (int j=0; j<n; ++j) {if (s[j] == '0') {++couner_0;} else {++couner_1;}}

    cout << abs(couner_0 - couner_1);
}