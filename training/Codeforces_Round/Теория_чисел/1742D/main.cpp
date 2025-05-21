#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

const int N = 1001;
map<int, set<int>> d;
bool m[N];

void sieve() {
    for (int i=2; i<=N; ++i) {
        if (!m[i]) {
            for (int j=i; j<=N; j+=i) {
                m[j]=1;
                d[j].insert(i);
            }
        }
    }
}

bool check(int _x, int _y) {
    if (_x==_y &&_x==1) {return 1;}
    
    int x, y;
    if (d[_x].size()<d[_y].size()) {x=_x; y=_y;}
    else {x=_y; y=_x;}

    for (int i: d[x]) {
        if (d[y].count(i)) {return 0;}
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    d[1].insert(1);
    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map <int, int> s;
        for (int i=0; i<n; ++i) {int num; cin >> num; s[num]=i+1;}

        int ans = -1;
        for (auto [j, k]: s) {
            for (auto [_j, _k]: s) {
                if (check(j, _j)) {ans = max(ans, k+_k);}
            }
        }
        cout << ans << "\n";
    }
}