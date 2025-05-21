#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int counter_group_0 = 0, couner_1 = 0, lag = -1;

        for (int i=0; i<n; ++i) {
            if (s[i] == '1') {++couner_1;}
            else {if (lag!=s[i]) {++counter_group_0;}}
            lag = s[i];
        }

        if (counter_group_0 < couner_1) {cout << "YES";} else {cout << "NO";}
        cout << endl;
    }
}