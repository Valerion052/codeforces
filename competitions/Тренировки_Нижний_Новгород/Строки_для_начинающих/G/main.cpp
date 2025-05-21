#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    transform(s.begin(), s.end(), s.begin(), [](unsigned char x){return tolower(x);});

    set<char> dict;
    for (char x: s) {dict.insert(x);}
    if (dict.size() != 26) {cout << "NO";} else {cout << "YES";}
}

