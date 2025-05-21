#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
 
        map<char, int> dict;
        for (int i=0; i<s.size(); ++i) {++dict[s[i]];}
 
        int _max = 0, _min = 11;
        char c__max, c__min;
        for (auto x: dict) {
            if (x.second > _max) {
                _max = x.second;
                c__max = x.first;
            }
        }
        for (auto x: dict) {
            if (x.second < _min && x.first != c__max) {
                _min = x.second;
                c__min = x.first;
            }
        }
 
        auto it_min = find(s.begin(), s.end(), c__min);
        *it_min = c__max;
 
        cout << s << '\n';
    }
}