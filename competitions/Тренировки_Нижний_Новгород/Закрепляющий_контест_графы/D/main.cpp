#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    char adj[n][m];
    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        for (int j=0; j<m; ++j) {
            adj[i][j]=s[j];
        }
    }
    bool flag=1;

    for (int _i=0; _i<n && flag; ++_i) {
        for (int _j=0; _j<m && flag; ++_j) {
            if (adj[_i][_j]=='W') {
                if (_i>0) {if (adj[_i-1][_j]=='S') {flag=0;}}
                if (_i<n-1) {if (adj[_i+1][_j]=='S') {flag=0;}}
                if (_j>0) {if (adj[_i][_j-1]=='S') {flag=0;}}
                if (_j<m-1) {if (adj[_i][_j+1]=='S') {flag=0;}}
            }
        }
    }

    if (!flag) {cout << "No";} else {
        cout << "Yes\n";
        for (int x=0; x<n; ++x) {
            for (int y=0; y<m; ++y) {
                if(adj[x][y]=='.') {cout << 'D';}
                else {cout << adj[x][y];}
            }
            cout << "\n";
        }
    }
}