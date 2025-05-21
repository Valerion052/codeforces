#include <iostream>

using namespace std;

const int N=4;
char arr[N][N];

int colors(char c, char k) {
    if (c==k) {return 1;}
    return 0;
}

bool check(int x, int y) {
    int d=0, w=0;
    
    d += colors(arr[x][y], '#');
    w += colors(arr[x][y], '.');

    d += colors(arr[x+1][y], '#');
    w += colors(arr[x+1][y], '.');

    d += colors(arr[x+1][y+1], '#');
    w += colors(arr[x+1][y+1], '.');

    d += colors(arr[x][y+1], '#');
    w += colors(arr[x][y+1], '.');

    if (w>=3 || d>=3) {return 1;}
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i=0; i<N; ++i) {
        for (int j=0; j<N; ++j) {cin >> arr[i][j];}
    }

    for (int _i=0; _i<N-1; ++_i) {
        for (int _j=0; _j<N-1; ++_j) {
            if (check(_i, _j)) {cout << "YES"; return 0;}
        }
    }
    cout << "NO";
}