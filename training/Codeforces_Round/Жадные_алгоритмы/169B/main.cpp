#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, s;
    cin >> a >> s;

    int index = 0;

    sort(s.begin(), s.end(), [](char x, char y) {return x>y;});

    for (int i=0; i<a.size() && index < s.size(); ++i) {
        if (s[index] > a[i]) {a[i] = s[index]; ++index;}
    }

    for (int k=0; k<a.size(); ++k) {cout << a[k];}

}