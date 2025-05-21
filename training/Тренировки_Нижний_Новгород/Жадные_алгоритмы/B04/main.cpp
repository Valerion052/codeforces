#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, result;
    string s;
    cin >> n >> s;

    sort(s.begin(), s.end()-n);
    sort(s.begin()+n, s.end());

    if (s[0] > s[n]) {result = 0;}
    else if (s[0] < s[n]) {result = 1;}
    else {cout << "NO"; return 0;}

    for (int i=1; i<n; ++i) {
        int flag;
        if (s[i] > s[n+i]) {flag = 0;}
        else if (s[i] < s[n+i]) {flag = 1;}
        else {flag = 3;}

        if (flag != result) {cout << "NO"; return 0;}
    }

    cout << "YES";
}