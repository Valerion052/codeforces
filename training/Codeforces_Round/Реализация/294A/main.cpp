#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[n+2]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    int m; cin >> m;
    for (int i=0; i<m; ++i) {
        int x, y; cin >> x >> y;
        arr[x-1]+=y-1;
        arr[x+1]+=arr[x]-y;
        arr[x]=0;
    }
    for (int i=1; i<=n; ++i) {cout << arr[i] << ' ';}
}   