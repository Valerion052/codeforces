#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int arr[8][8]{};
        for (int i=0; i<8; ++i) {
            string s; cin >> s;
            for (int j=0; j<8; ++j) {
                if (s[j]=='#') {arr[i][j]=1;}
            }
        }
        int x=-1, y=-1;
        for (int i=1; i<7 && x<0 && y<0; ++i) {
            for (int j=1; j<7 && x<0 && y<0; ++j) {
                if (arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j+1]==4) {x=i+1; y=j+1;}
            }
        }
        cout << x << ' ' << y << "\n";
    }
}