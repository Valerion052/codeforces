#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int N=101;
int n, m;
char c;
char arr[N][N];
set<char> ans;

char valid(pair<int, int> k, int x, int y) {
    if (arr[k.first+x][k.second+y]!='.' && arr[k.first+x][k.second+y]!=c) {
        return arr[k.first+x][k.second+y];
    }
    return '#';
}

void check(pair<int, int> p) {
    if (p.first>0) {char v = valid(p, -1, 0); if (v!='#') {ans.insert(v);}}
    if (p.first<n-1) {char v = valid(p, 1, 0); if (v!='#') {ans.insert(v);}}
    if (p.second>0) {char v = valid(p, 0, -1); if (v!='#') {ans.insert(v);}}
    if (p.second<m-1) {char v = valid(p, 0, 1); if (v!='#') {ans.insert(v);}}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> c;

    vector<pair<int, int>> p;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> arr[i][j];
            if (arr[i][j]==c) {p.push_back({i, j});}
        }
    }

    for (auto x: p) {check(x);}
    cout << ans.size();


}