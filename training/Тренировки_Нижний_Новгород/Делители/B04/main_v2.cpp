#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N = 100001;
vector<int> d[N];

void sieve() {
    for (int i=1; i<N; ++i) {
        for (int j=i; j<N; j+=i) {
            d[j].push_back(i);
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int n;
    cin >> n;

    map<int, map<int, int>> dict;

    for (int i=1; i<=n; ++i) {
        int x, y;
        cin >> x >> y;
    
        if (y==0) {cout << d[x].size();}
        else {
            map<int, int> local = dict[i-1];
            if (i-y!=1) {
                for (auto _: dict[i-y-1]) {local[_.first] -= _.second;}
            }
            int ans = 0;
            for (auto r: d[x]) {if (local[r]==0) {++ans;}}
            cout << ans;
        }
        dict[i] = dict[i-1];
        for (auto row: d[x]) {++dict[i][row];}
        cout << '\n';
    }
}