#include <iostream>
#include <vector>

using namespace std;

const int N=101;
int n, m;
int arr[N][N]{};

const int _N=3;
int p[_N] = {-1, 0, 1};

bool check (int x, int y) {

    int count=0;
    for (int i=0; i<_N; ++i) {
        for (int j=0; j<_N; ++j) {
            if (p[i]==0 && p[j]==0) {continue;}
            
            if (x+p[i]>0 && x+p[i]<=n) {
                if (y+p[j]>0 && y+p[j]<=m) {
                    if (arr[x+p[i]][y+p[j]]>N) {++count;}
                }
            }
        }
    }
    return count==arr[x][y];

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;   

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            char c; cin >> c;
            if (c=='*') {arr[i][j]=1e9;}
            else if (c=='.') {arr[i][j]=0;}
            else {arr[i][j]=c-'0';}
        }
    }




    bool flag=1;
    for (int _i=1; _i<=n && flag; ++_i) {
        for (int _j=1; _j<=m && flag; ++_j) {
            if (arr[_i][_j]>=0 && arr[_i][_j]<9) {flag=check(_i, _j);}
        }
    }
    if (flag) {cout << "YES";} else {cout << "NO";}
}