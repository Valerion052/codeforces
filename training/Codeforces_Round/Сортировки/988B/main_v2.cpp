#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool f(string x, string y) {

    if (x.size() == y.size()) {return x<y;}
    return x.size() < y.size();

};

int main() {
    int n;
    cin >> n;

    string s[n];

    for (int i=0; i<n; ++i) {
        cin >> s[i];
    }

    sort(s, s+n, f);

    if (n!=1) {
        for (int j=1; j<n; ++j) {
            if (s[j].find(s[j-1]) == string::npos) {
                cout << "NO" << endl;;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    for (int k=0; k<n; ++k) {
        cout << s[k] << endl;
        }
    
}