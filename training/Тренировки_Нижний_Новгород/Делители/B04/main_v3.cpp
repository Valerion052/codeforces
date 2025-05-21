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

    map<int, int> dict;

    for (int i=1; i<=n; ++i) {
        int x, y;
        cin >> x >> y;

        int ans = 0;

        if (y==0) {ans=d[x].size();}
        else {
            for (auto a: d[x]) {
                if (dict[a] < i-y) {++ans;}
            }
        }
        for (auto _x: d[x]) {dict[_x] = i;}

        cout << ans << '\n';
    }
}