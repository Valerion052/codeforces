#include <iostream>
#include <map>

using namespace std;

map<char, int> dict;
string ans;

void print(char x) {
    if (dict.count(x)) {
        for (int i=0; i<dict[x]; ++i) {
            ans.append(1, x);
            ans.append(1, '+');
        }
    }

}

int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for (int i=0; i<s.size(); ++i) {++dict[s[i]];}

    print('1');
    print('2');
    print('3');

    cout << ans.substr(0, s.size());
}