#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n;
set<int> num;


void DFS(vector<vector<int>> &d, bool started, vector<bool> &mask, int k) {
    if (started) {num.insert(k);}
    for (int i=0; i<n; ++i) {
        if (!mask[i]) {
            mask[i]=1;
            for (int x: d[i]) {
                if (!started && x == 0) {continue;}
                int _x = started ? k*10+x : x;
                DFS(d, 1, mask, _x);
            }
            mask[i]=0;
        }
    }

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    vector<vector<int>> d(n);
    for (int i=0; i<n; ++i) {
        for (int j=0; j<6; ++j) {
            int a; cin >> a;
            d[i].push_back(a);
        }
    }

    vector<bool> mask(n, 0);
    DFS(d, 0, mask, 0);

    int ans=1;
    while (num.count(ans)) {++ans;}
    cout << ans-1;

}