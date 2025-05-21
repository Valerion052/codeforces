#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<int, int> d = {{'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}};
    cin >> d['1'] >> d['2'] >> d['3'] >> d['4'];

    string s;
    cin >> s;

    int ans=0;
    for (int i=0; i<s.size(); ++i) {ans+=d[s[i]];}
    cout << ans;

}