#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    
    int count_x = count(s.begin(), s.end(), 'x');
    int count_y = count(s.begin(), s.end(), 'y');

    if (count_x > count_y) {cout << string((count_x - count_y), 'x');}
    else {cout << string((count_y - count_x), 'y');}

}