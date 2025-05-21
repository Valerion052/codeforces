#include <iostream>
#include <map>

using namespace std;

int cal(map <int, int> &d, int k) {
    int ans=d[k];
    auto it = d.begin();
    while (it!=d.end()) {
        if ((*it).first>k) {++(*it).second;}
        ++it;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[m];
        map <int, int> d;
        for (int i=0; i<m; ++i) {cin >> arr[i]; d[arr[i]]=0;}

        int ans=0;
        for (int j=0; j<m; ++j) {ans+=cal(d, arr[j]);}
        cout << ans << "\n";
    }
}