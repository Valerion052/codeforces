#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int arr[m+1];
    for (int i=0; i<=m; ++i) {cin >> arr[i];}

    int ans=0;
    for (int j=0; j<m; ++j) {
        int count=0;
        for (int _j=0; _j<n; ++_j) {
            count+=((arr[m]>>_j)&1) != ((arr[j]>>_j)&1);
        }
        if (count<=k) {++ans;}
    }
    cout << ans;
}