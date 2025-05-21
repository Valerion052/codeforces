#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {cin >> arr[i][j];}
    }
    int ans=0;
    for (int _i=0; _i<n; ++_i) {
        for (int _j=0; _j<m; ++_j) {
            if (arr[_i][_j]=='W') {
                if (_i>0) {if (arr[_i-1][_j]=='P') {++ans; continue;}}
                if (_i<n-1) {if (arr[_i+1][_j]=='P') {++ans; continue;}}
                if (_j>0) {if (arr[_i][_j-1]=='P') {++ans; continue;}}
                if (_j<m-1) {if (arr[_i][_j+1]=='P') {++ans; continue;}}
            }
        }
    }
    cout << ans;
}