#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> d = {'a', 'o', 'y', 'e', 'u', 'i'};

    transform(s.begin(), s.end(), s.begin(), [](char x){return tolower(x);});

    for (char x: s) {
        if (!d.count(x)) {cout << '.' << x;}
    }
}

