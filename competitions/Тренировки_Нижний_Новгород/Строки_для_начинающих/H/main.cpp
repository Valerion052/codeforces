#include <iostream>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    set<char> dict;
    for (char x: s) {dict.insert(x);}

    int result = n - dict.size();

    if (result<26 && n<27) {cout << result;} else {cout << -1;}


}

