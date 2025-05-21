#include <iostream>

using namespace std;

int main () {
    int n;
    string s;
    cin >> n >> s;

    int couner_drop = 0;
    char first = s[0];

    for (int j=1; j<n; ++j) {if (s[j] != first) {++couner_drop;}}

    cout << abs(n - couner_drop*2);
}