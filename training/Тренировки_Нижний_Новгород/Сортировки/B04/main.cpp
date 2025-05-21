#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
 
    int t;
    cin >>t;
 
    while (t--) {
 
        int n;
        int k=0;
        string s, s_copy;
 
        cin >> n;
        cin >> s;
 
        s_copy = s;
 
        sort(s.begin(), s.end());
 
        for (int i=0; i<n; ++i) {
            if (s_copy[i] != s[i]) {++k;}
        }
 
        cout << k << endl;
    }
}