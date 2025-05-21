#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> p(N, {0, 0});
    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        if (p[num].first==0) {p[num].first=p[num].second=i;}
        else {p[num].second=i;}
    }

    int m;
    cin >> m;
    long long _1=0, _2=0;
    for (int j=0; j<m; ++j) {
        int b;
        cin >> b;
        _1+=p[b].first;
        _2+=n-p[b].second+1;
    }
    cout << _1 << ' ' << _2;
}