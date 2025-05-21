#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[9][9];
    for (int i=0; i<9; ++i) {
        for (int j=0; j<9; ++j) {
            if (i==8 || j==0) {arr[i][j]=100000;}
            else {cin >> arr[i][j];}
        }
    }
    
    arr[8][0]=0;
    for (int _i=7; _i>=0; --_i) {
        for (int _j=1; _j<=8; ++_j) {
            int value = min(min(arr[_i][_j-1], arr[_i+1][_j-1]), arr[_i+1][_j]);
            arr[_i][_j] = value + arr[_i][_j];
        }
    }

    cout << arr[0][8];
}