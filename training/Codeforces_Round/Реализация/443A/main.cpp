#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    set<char> d;
    for (int i=0; i<s.size(); ++i) {
        if (s[i]!='{' && s[i]!='}' && s[i]!=',' && s[i]!=' ') {d.insert(s[i]);}
    }
    cout << d.size(); 
}