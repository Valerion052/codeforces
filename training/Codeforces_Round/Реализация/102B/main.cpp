#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int value = 0;
    for (int i=0; i<s.size(); ++i) {value+=s[i]-'0';}

    int counter = s.size()>1 ? 1 : 0;

    while (1) {
        if (value/10==0) {cout << counter; return 0;}

        int local = value;
        value = 0;
        while (local/10>0) {value+=local%10; local/=10;}
        value+=local;
        ++counter;
    }
}