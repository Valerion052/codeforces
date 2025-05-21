#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    map<char, int> dict = {{'U', 0}, {'D', 0}, {'L', 0}, {'R', 0}};

    for (int i=0; i<n; ++i) {++dict[s[i]];}

    cout << min(dict['U'], dict['D'])*2 + min(dict['L'], dict['R'])*2;

}