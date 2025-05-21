#include <iostream>

using namespace std;

int check(string k_1, string k_2) {
    int ans=0;
    for (int i=1; i<k_1.size()-1; ++i) {
        if (k_1[i-1]=='.' && k_1[i] == '.' && k_1[i+1]=='.') {
            if (k_2[i-1]=='x' && k_2[i] == '.' && k_2[i+1]=='x') {++ans;}
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s_1, s_2;
        cin >> n >> s_1 >> s_2;

        cout << check(s_1, s_2) + check(s_2, s_1) << "\n";
    }
}