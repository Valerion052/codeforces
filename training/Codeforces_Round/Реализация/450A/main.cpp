#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int ans = n, max_ans=2;
    for (int j=0; j<n; ++j) {
        int v = arr[j]/m;
        v += (arr[j]%m!=0) ? 1 : 0;
        if (v>=max_ans) {max_ans=v; ans=j+1;}
    }

    cout << ans;
}