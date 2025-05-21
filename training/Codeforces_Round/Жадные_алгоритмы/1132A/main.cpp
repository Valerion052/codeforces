#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _1, _2, _3, _4;
    cin >> _1 >> _2 >> _3 >> _4;

    if (_1==_4 && (_3==0 || _1>0)) {cout << 1;} else {cout << 0;}


}