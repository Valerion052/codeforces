#include <iostream>
#include <map>

using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    string s_1, s_2;
    getline(cin, s_1);
    getline(cin, s_2);

    map<char, int> d;
    for (int i=0; i<s_1.size(); ++i) {++d[s_1[i]];}

    bool flag = 1;
    for (int j=0; j<s_2.size() && flag; ++j) {
        if (s_2[j]!=' ') {
            if (d[s_2[j]]>0) {--d[s_2[j]];}
            else {flag=0;}
        }
    }
    
    if (flag) {cout << "YES";} else {cout << "NO";}

}