#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        bool vis[26]{};
        vector<char> d;
        for (int i=0; i<n; ++i) {
            if (!vis[s[i]-'a']) {d.push_back(s[i]); vis[s[i]-'a']=1;}
        }
        sort(d.begin(), d.end());
        map<char, char> check;
        for (int i=0; i<=d.size()/2; ++i) {
            check[d[i]]=d[d.size()-1-i];
            check[d[d.size()-1-i]]=d[i];
        }

        for (int i=0; i<n; ++i) {cout << check[s[i]];} cout << "\n";
    }

}   