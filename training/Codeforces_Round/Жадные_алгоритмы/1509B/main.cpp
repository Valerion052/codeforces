#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool flag = true;
        int counter_T_left = 0, counter_T_right = 0, counter_M_left = 0, counter_M_right = 0;

        for (int i=0; i<n; ++i) {
            if (s[i] == 'T') {++counter_T_left;}
            else {++counter_M_left;}

            if (s[n-1-i] == 'T') {++counter_T_right;}
            else {++counter_M_right;}

            if (counter_M_left > counter_T_left || counter_M_right > counter_T_right) {flag=false;}
        }

        
        if (counter_T_left != counter_M_left*2) {flag=false;}
        
        
        if (flag) {cout << "YES";} else {cout << "NO";}
        cout << '\n';
    }
}