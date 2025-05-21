#include <iostream>

using namespace std;

int visited_2[9][9]{};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a==c || b==d) {cout << 1;} else {cout << 2;} cout << ' ';

    if ((a+b)%2 != (c+d)%2) {cout << 0;}
    else {
        if (a+b==c+d || a-b==c-d) {cout << 1;}
        else {cout << 2;}
    }

    cout << ' ' << max(abs(a-c), abs(b-d));




    
}