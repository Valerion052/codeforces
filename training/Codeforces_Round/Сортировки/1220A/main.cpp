#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    map<char, int> dict;

    for (int i=0; i<n; ++i) {++dict[s[i]];}

    for (int j=0; j<dict['n']; ++j) {cout << 1 << ' ';}
    for (int k=0; k<dict['z']; ++k) {cout << 0 << ' ';}
}