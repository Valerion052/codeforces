#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d, x, y, x_1, y_1, x_2, y_2;
        cin >> a >> b >> c >> d >> x >> y >> x_1 >> y_1 >> x_2 >> y_2;

        bool flag=1;
        int a_b = max(a, b)-min(a, b);
        int c_d = max(c, d)-min(c, d);
        if (a==b && a!=0) {a_b=1;}
        if (c==d && c!=0) {c_d=1;}

        // cout << a_b << ' ' << c_d << "\n";


        if (a>b) {if (abs(x-x_1) < a_b) {flag=0;}}
        else if (a==b) {if (max(abs(x-x_1), abs(x-x_2)) < a_b) {flag=0;}}
        else {if (abs(x-x_2) < a_b) {flag=0;}}

        if (c>d) {if (abs(y-y_1) < c_d) {flag=0;}}
        else if (c==d) {if (max(abs(y-y_1), abs(y-y_2)) < c_d) {flag=0;}}
        else {if (abs(y-y_2) < c_d) {flag=0;}}

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}