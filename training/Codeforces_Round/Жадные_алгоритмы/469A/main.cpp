#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[101]{};

    int p, q;
    cin >> p;
    for (int i=0; i<p; ++i) {int _p; cin >> _p; ++arr[_p];}
    cin >> q;
    for (int j=0; j<q; ++j) {int _q; cin >> _q; ++arr[_q];}

    bool flag=true;
    for (int i=1; i<=n; ++i) {if (!arr[i]) {flag=false; break;}}

    if (flag) {cout << "I become the guy.";} else {cout << "Oh, my keyboard!";} 
}