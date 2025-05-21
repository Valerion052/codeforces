#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    string s;
    cin >> s;

    int _4 = count(s.begin(), s.end(), '4');
    int _7 = count(s.begin(), s.end(), '7');
    int ans = _4 +_7;

    if (ans==4 || ans==7) {cout << "YES";} else {cout << "NO";}
}