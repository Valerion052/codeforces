#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s_1, s_2;
    cin >> s_1 >> s_2;

    auto it = find(s_1.begin(), s_1.end(), '|');
    int n_1 = distance(s_1.begin(), it);
    int n_2 = distance(it, s_1.end())-1;
    int n_3 = s_2.size();
    int delta = abs(n_1-n_2);
    int value = n_3-delta;

    if (value>=0 && value%2==0) {
        cout << s_1.substr(0, n_1);
        if (n_1<n_2) {cout << s_2.substr(0, delta);}
        cout << s_2.substr(delta, value/2);

        cout << s_1.substr(n_1, s_1.size());
        if (n_1>n_2) {cout << s_2.substr(0, delta);}
        cout << s_2.substr(delta+value/2, value/2);
    }
    else {cout << "Impossible";}
}