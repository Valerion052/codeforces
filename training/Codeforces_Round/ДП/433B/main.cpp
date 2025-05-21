#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    long long dp_1[n+1]{}, dp_2[n+1]{};
    for (int i=1; i<=n; ++i) {
        cin >> dp_2[i];
        dp_1[i] = dp_1[i-1] + dp_2[i];
    }

    sort(dp_2, dp_2+n+1);
    for (int j=1; j<=n; ++j) {dp_2[j] = dp_2[j-1]+dp_2[j];}

    int m;
    cin >> m;

    for (int k=0; k<m; ++k) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type==1) {cout << dp_1[r]-dp_1[l-1];}
        else {cout << dp_2[r]-dp_2[l-1];}
        cout << "\n";
    }
}