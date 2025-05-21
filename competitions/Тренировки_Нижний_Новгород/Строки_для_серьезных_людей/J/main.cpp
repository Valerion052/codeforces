#include <iostream>

using namespace std;

bool check(string s_1, string s_2) {
    if (s_1.size()<s_2.size()) {return 1;}
    if (s_1.size()>s_2.size()) {return 0;}
    return s_1<=s_2;
}

int main() {

    string s;
    cin >> s;
    int n = s.size();

    if (check(s, "127")) {cout << "byte";}
    else if (check(s, "32767")) {cout << "short";}
    else if (check(s, "2147483647")) {cout << "int";}
    else if (check(s, "9223372036854775807")) {cout << "long";}
    else {cout << "BigInteger";}
}