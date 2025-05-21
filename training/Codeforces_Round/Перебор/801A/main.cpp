#include <iostream>
#include <map>

using namespace std;

int counter(string &s) {
    int count=0;
    for (int i=0; i<s.size()-1; ++i) {
        if (s.substr(i, 2)=="VK") {++count;}
    }
    return count;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string s;
    cin >> s;

    int ans = counter(s);
    map <char, char> d = {{'V', 'K'}, {'K', 'V'}};

    for (int i=0; i<s.size(); ++i) {
        s[i] = d[s[i]];
        ans = max(ans, counter(s));
        s[i] = d[s[i]];
    }
    cout << ans;
}