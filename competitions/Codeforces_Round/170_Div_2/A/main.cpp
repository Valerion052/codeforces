#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        int result = 0, copy = 0;

        for (int i =0; i<min(s.size(), t.size()); ++i) {
            if (s[i] == t[i]) {++result;} else {break;}
        }

        if (result>0) {++copy;}

        result += s.size() + t.size() - 2*result + copy;

        cout << result << '\n';
    }

}