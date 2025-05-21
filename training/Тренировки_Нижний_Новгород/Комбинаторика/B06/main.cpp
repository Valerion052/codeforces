#include <iostream>

using namespace std;

int C[20][20];

void make_C() {
    C[0][0]=1;
    for (int i=1; i<20; ++i) {
        C[i][0]=C[i][i]=1;
        for (int j=1; j<i; ++j) {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_C();
    int n;
    cin >> n;

    cout << C[2*n-2][n-1];
}