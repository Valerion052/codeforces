#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n];
    map<int, int> d;

    for (int i=0; i<n; ++i) {cin >> arr[i];}
    for (int j=0; j<m; ++j) {int x; cin >> x; ++d[x];}

    int ans=0;
    auto it = d.end(); --it;
    d[0]=1;
    for (int k=n-1; k>=0; --k) {
        if (arr[k]<=(*it).first) {--(*it).second;}
        else {++ans;}

        if ((*it).second==0) {--it;}
    }
    cout << ans;
}