#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    pair<int, int> p[n];
    for (int i=0; i<n; ++i) {cin >> p[i].first >> p[i].second;}

    int ans=0;
    for (int j=0; j<n; ++j) {
        for (int k=0; k<n; ++k) {
            if (j!=k) {
                if (p[j].first==p[k].second) {++ans;}
            }
        }
    }
    cout << ans;
}