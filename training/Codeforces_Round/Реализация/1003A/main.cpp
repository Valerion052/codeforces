#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[101]{};
    for (int i=0; i<n; ++i) {int x; cin >> x; ++arr[x];}

    int ans=0;
    for (int i=0; i<101; ++i) {ans=max(ans, arr[i]);}
    cout << ans;

}