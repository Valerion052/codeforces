#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    
    int n = s.size();
    int counter = 0;

    for (int i=0; i<n/2; ++i) {
        if (s[i] != s[n-1-i]) {++counter;}
    }
    
    if (counter==1 || (counter==0 && n%2!=0)) {cout << "YES\n";}
    else {cout << "NO\n";}
}