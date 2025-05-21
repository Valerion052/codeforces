#include <iostream>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char start_x, start_y, end_x, end_y;
    cin >> start_x >> start_y >> end_x >> end_y;

    int line_x = end_x - start_x;
    int line_y = end_y - start_y;

    cout << max(abs(line_x), abs(line_y)) << '\n';

    while (line_x!=0 || line_y!=0) {
        
        if (line_x > 0) {cout << 'R'; --line_x;}
        else if (line_x < 0) {cout << 'L'; ++line_x;}

        if (line_y > 0) {cout << 'U'; --line_y;}
        else if (line_y < 0) {cout << 'D'; ++line_y;}
        
        cout << '\n';
    }
}