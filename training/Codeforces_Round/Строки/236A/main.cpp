#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;

    set<char> dict;
    for (int i=0; i<s.size(); ++i) {dict.insert(s[i]);}

    if (dict.size()%2==0) {cout << "CHAT WITH HER!";} else {cout << "IGNORE HIM!";}
}