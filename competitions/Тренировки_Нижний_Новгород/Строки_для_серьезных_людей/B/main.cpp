#include <iostream>

using namespace std;

int main() {
    string  s, t, s_1, s_2;
    cin >> s >> t;

    if (s.size() > t.size()) {s_1 = s; s_2 = t;}
    else {s_1 = t; s_2 = s;}

    int ans = s_1.size() - s_2.size();
    s_1.erase(0, ans);

    int count = 0;

    for (int i=0; i<s_1.size(); ++i) {
        if (s_1[i] == s_2[i]) {++count;}
        else {
            ++ans;
            if (count != 0) {ans+=count;}
            count = 0;
        }
    }

    cout << ans + s_1.size() - count;
}