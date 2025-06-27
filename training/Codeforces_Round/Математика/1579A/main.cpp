#include <iostream>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        map<char, int> d;
        d['A']=0; d['B']=0; d['C']=0;
        for (int i=0; i<s.size(); ++i) {++d[s[i]];}
        if (d['A']+d['C']==d['B']) {cout << "YES\n";} else {cout << "NO\n";} 
    }
}